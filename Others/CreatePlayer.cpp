#include "Create.h"
#include "Entity.h"
#include "Components/Position.cpp"
#include "Components/Velocity.cpp"
#include "Components/Sprite.cpp"
#include<list>
#ifndef _COLLISIONPLAYERBRICK_CPP
#define _COLLISIONPLAYERBRICK_CPP
class CreatePlayer:public Create
{
public:
Entity *create(){
    Entity *entity;
    Position *position=new Position(5,5);
    Velocity *velocity=new Velocity(1,1,1);
    Sprite *spritePlayer=new Sprite();
    entity->add("position",position);
    entity->add("velocity",velocity);
    entity->add("sprite",spritePlayer);
    entity->setName("player");
    return entity;
}
};
#endif