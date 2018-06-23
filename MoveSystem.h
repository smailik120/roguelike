#ifndef _MOVESYSTEM_CPP
#define _MOVESYSTEM_CPP
#include "Position.cpp"
#include "Velocity.cpp"
#include<list>
#include "Engine.h"
#include "System.cpp"
#include "Entity.h"


class MoveSystem : public System{
private:
    Position *position;
    Velocity *velocity;
public:
    void update() ;
    bool validate(Entity *entity);
};
#endif