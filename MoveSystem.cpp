#include "MoveSystem.h"



    void MoveSystem::update() 
    {
        
        list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
        for(list<Entity>:: iterator it=entities->begin();it!=entities->end();it++)
        {
               if(validate(&(*it)))
               {
                    Position *pos=static_cast<Position *>((&(*it))->getComponent("position"));
                    Velocity *vel=static_cast<Velocity *>((&(*it))->getComponent("velocity"));
                    pos->setX(pos->getX()+vel->getSpeed());
               }
        }
    
    }
    bool MoveSystem::validate(Entity *entity)
    {
        
        if(entity->getComponent("position")==NULL || entity->getComponent("velocity")==NULL )
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }