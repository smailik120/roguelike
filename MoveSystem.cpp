#include "MoveSystem.h"
#include <typeinfo>
    MoveSystem::MoveSystem()
    {
        m.insert(pair<pair<string,string>,Collision *>(pair<string,string>("player","brick"),new CollisionPlayerBrick));
        //m.insert(pair<pair<string,string>,Collision *>(pair<string,string>("brick","player"),new CollisionPlayerBrick));
        //cout<<m[pair<string,string>("player","brick")]<<" ";
    }
   

    void MoveSystem::update() 
    {
        
        list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
        list<Entity> *velocityEntities=&Engine::getCurrentScene()->getVelocityEntities();
        
       // int ch=getch();
       // if(ch==119)
       // {
       //    Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
      //     Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
       //    pos->setY(pos->getY()+vel->getSpeed()); 
       // }
     
        

        for(list<Entity>:: iterator it=velocityEntities->begin();it!=velocityEntities->end();it++)
        {
        
        for(list<Entity>:: iterator it1=entities->begin();it1!=entities->end();it1++)
        {
            
            
               if(validate(&(*it)) && validate(&(*it1)))
               {
                   
                   string name=it->getName();
                   string name1=it1->getName();
                   
                   if(m[pair<string,string>(name,name1)]!=0  )
                   {
                       Position *pos=static_cast<Position *>((&(*it))->getComponent("position"));
                       Position *pos1=static_cast<Position *>((&(*it1))->getComponent("position"));
                       if(pos->getY()==pos1->getY() && pos1->getX()==pos->getX())
                       {
                       CollisionPlayerBrick *col=static_cast<CollisionPlayerBrick *>(m[pair<string,string>(name,name1)]);
                       col->Action(&(*it),&(*it1));
                       }
                       //CollisionPlayerBrick *col=static_cast<Collision *>(m[pair<string,string>(name,name1)]);
                       //Collm[pair<string,string>(name,"brick")]->Action(&(*it),&(*it1));
                       
                   }
                   //cout<<m[pair<string,string>(name,"brick")];
                   //CollisionPlayerBrick *pos=static_cast<Collision *>(m[pair<string,string>(name,name1)]);
                    //Position *pos=static_cast<Position *>((&(*it))->getComponent("position"));
                    //Velocity *vel=static_cast<Velocity *>((&(*it))->getComponent("velocity"));
                    //pos->setX(pos->getX()+vel->getSpeed());
               }

            
            }
            
        }
        
    
    }
    bool MoveSystem::validate(Entity *entity)
    {
        
        if(entity->getComponent("position")==NULL  )
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }