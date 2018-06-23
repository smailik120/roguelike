#include "CameraSystem.h"


void CameraSystem::update() 
    {
    
    list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
   
        for(list<Entity>:: iterator it=entities->begin();it!=entities->end();it++)
        {
               if(validate(&(*it)))
               {
                    Position *pos=static_cast<Position *>((&(*it))->getComponent("position"));
                    move(pos->getX(),pos->getY());
                    Sprite *sprite=static_cast<Sprite *>(((&(*it))->getComponent("sprite")));
                    const char  *c=sprite->getTexture();
                    printw(c);
                    //refresh();
                }
        }
    
    }
    bool CameraSystem::validate(Entity *entity)
    {
    
        if(entity->getComponent("position")==NULL || entity->getComponent("sprite")==NULL )
        {
            return false;
        }
        else
        {
            return true;
        }
    
    }
