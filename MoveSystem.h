#ifndef _MOVESYSTEM_CPP
#define _MOVESYSTEM_CPP
#include "Collision.h"
#include "CollisionPlayerBrick.cpp"
#include "CollisionPlayerMoney.cpp"
#include<map>
#include "Position.cpp"
#include "Velocity.cpp"
#include<list>
#include "Engine.h"
#include "System.cpp"
#include "Entity.h"
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