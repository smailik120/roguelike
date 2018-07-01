#ifndef _LOADER_H
#define _LOADER_H 
#include "Scene.h"
#include "Position.cpp"
#include "Sprite.cpp"
#include "CameraSystem.h"
#include "MoveSystem.h"
#include "InputSystem.h"
#include "SystemManager.cpp"
#include<fstream>
//#include<iostream>
//#include<list>
#include "Velocity.cpp"
#include <string>
#include <cstring>
#include <cstdlib>
//#include<ncurses.h>

class LoaderOfFile{
    private:
    Entity create(string s);
    public:
    SystemManager *systemManager;
    LoaderOfFile();
    list<Scene>  &load(string path);
    SystemManager &manager();
   Scene scene;
};

#endif