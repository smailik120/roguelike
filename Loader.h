#ifndef _LOADER_H
#define _LOADER_H 
#include "Scene.h"
#include "Position.cpp"
#include "Sprite.cpp"
#include "CameraSystem.h"
#include "MoveSystem.h"
#include "SystemManager.cpp"
//#include<iostream>
//#include<list>
#include "Velocity.cpp"
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