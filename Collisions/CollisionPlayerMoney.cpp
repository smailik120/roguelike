#include "Collision.h"
#include "../Entity/Entity.h"
#include "../Components/Position.cpp"
#include "../Components/Score.cpp"
#ifndef _COLLISIONPLAYEMONEY_CPP
#define _COLLISIONPLAYERMONEY_CPP
class CollisionPlayerMoney:public Collision
{
public:
void Action(Entity *player,Entity *money){
   Position *posPlayer=static_cast<Position *>(player->getComponent("position"));
   Position *posBrick=static_cast<Position *>(money->getComponent("position"));
   Score *scorePlayer=static_cast<Score *>(player->getComponent("score"));
   Score *scoreMoney=static_cast<Score *>(money->getComponent("score"));
   scorePlayer->setScore(scoreMoney->getScore()+scorePlayer->getScore());
   scoreMoney->setScore(-1000);
   
}
};
#endif