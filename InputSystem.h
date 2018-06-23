#ifndef _INPUTSYSTEM_CPP
#define _INPUTSYSTEM_CPP
#include "Position.cpp"
#include "Velocity.cpp"
#include<list>
#include "Engine.h"
#include "System.cpp"
#include "Entity.h"
#include<ncurses.h>
#include <iostream>

class InputSystem : public System{
public:
    InputSystem();
    void update() ;
    bool validate(Entity *entity);
};
#endif