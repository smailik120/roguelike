#ifndef _MOVESYSTEM_CPP
#define _MOVESYSTEM_CPP
#include "../Collisions/Collision.h"
#include "../Collisions/CollisionPlayerBrick.cpp"
#include "../Collisions/CollisionPlayerMoney.cpp"
#include<map>
#include "../Components/Position.cpp"
#include "../Components/Velocity.cpp"
#include<list>
#include "../Entity/Engine.h"
#include "System.cpp"
#include "../Entity/Entity.h"
#include<iostream>
#include<cstring>
using namespace std;
class MoveSystem : public System{
private:
    map<pair<string,string>,Collision *> m;
    Position *position;
    Velocity *velocity;
public:
    MoveSystem();
    void update() ;
    bool validate(Entity *entity);
    void create();
};
#endif