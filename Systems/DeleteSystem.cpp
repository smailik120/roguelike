#include "DeleteSystem.h"


void DeleteSystem::update() 
    {
    
    list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
   
        for(list<Entity>:: iterator it=entities->begin();it!=entities->end();it++)
        {
               if(validate(&(*it)))
               {
                    Score *score=static_cast<Score *>((&(*it))->getComponent("score"));
                    Sprite *sprite=static_cast<Sprite *>((&(*it))->getComponent("sprite"));
                    Position *position=static_cast<Position *>((&(*it))->getComponent("position"));
                    if(score->getScore()==-1000)
                    {
                       entities->erase(it);
                       (*it).dispose();
                       it--;
                        //delete &(*it);
                    }      
                   // cout<<c;
                  // const char *image=&sprite->getTexture();
                   
                    //refresh();
                }
        }
    
    }
    bool DeleteSystem::validate(Entity *entity)
    {
    
        if(entity->getComponent("score")==NULL || entity->getComponent("sprite")==NULL )
        {
            return false;
        }
        else
        {
            return true;
        }
    
    }
