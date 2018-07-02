#ifndef _LOADER_H
#define _LOADER_H 
#include "Scene.h"
#include "../Components/Position.cpp"
#include "../Components/Sprite.cpp"
#include "../Systems/CameraSystem.h"
#include "../Systems/MoveSystem.h"
#include "../Systems/InputSystem.h"
#include "../Systems/SystemManager.cpp"

//#include<iostream>
//#include<list>
#include "../Components/Velocity.cpp"
//#include<ncurses.h>

class Loader{
    public:
    SystemManager *systemManager;
    Loader();
    list<Scene>  &load(string path);
    SystemManager &manager();
   Scene scene;
};

#endif