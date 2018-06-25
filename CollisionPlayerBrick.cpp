#include "Collision.h"
#include "Entity.h"
#include "Position.cpp"
#include "Velocity.cpp"
#ifndef _COLLISIONPLAYERBRICK_CPP
#define _COLLISIONPLAYERBRICK_CPP
class CollisionPlayerBrick:public Collision
{
public:
void Action(Entity *player,Entity *brick){
   Position *posPlayer=static_cast<Position *>(player->getComponent("position"));
   Position *posBrick=static_cast<Position *>(brick->getComponent("position"));
   Velocity *velPlayer=static_cast<Velocity *>(player->getComponent("velocity"));
   if(velPlayer->getSpeedY()>0){
    //cout<<velPlayer->getSpeedY()<<" ";
   posPlayer->setY(posPlayer->getY()-velPlayer->getSpeedY());
   }
   if(velPlayer->getSpeedY()<0){
   posPlayer->setY(posPlayer->getY()-velPlayer->getSpeedY());
   }
   if(velPlayer->getSpeedX()>0){
   posPlayer->setX(posPlayer->getX()-velPlayer->getSpeedX());
   }
  if(velPlayer->getSpeedX()<0){
   posPlayer->setX(posPlayer->getX()-velPlayer->getSpeedX());
   }
}
};
#endif