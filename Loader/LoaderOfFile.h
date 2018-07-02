
#include "../Entity/Scene.h"
#include "../Components/Position.cpp"
#include "../Components/Sprite.cpp"
#include "../Systems/CameraSystem.h"
#include "../Systems/MoveSystem.h"
#include "../Systems/InputSystem.h"
#include "../Systems/SystemManager.cpp"
#include "../Systems/DeleteSystem.h"
#include<fstream>
//#include<iostream>
//#include<list>
#include "../Components/Velocity.cpp"
#include <string>
#include <cstring>
#include <cstdlib>
//#include<ncurses.h>
#ifndef _LOADER_H
#define _LOADER_H 
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