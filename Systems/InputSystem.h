#ifndef _INPUTSYSTEM_CPP
#define _INPUTSYSTEM_CPP
#include "../Components/Position.cpp"
#include "../Components/Velocity.cpp"
#include<list>
#include "../Entity/Engine.h"
#include "System.cpp"
#include "../Entity/Entity.h"
#include<ncurses.h>
#include <iostream>

class InputSystem : public System{
public:
    InputSystem();
    void update() ;
    bool validate(Entity *entity);
};
#endif