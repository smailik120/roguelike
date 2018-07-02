#ifndef _CAMERASYSTEM_H
#define _CAMERASYSTEM_H
#include "../Entity/Engine.h" 
//#include "System.cpp"
#include "../Components/Camera.cpp"
#include "../Components/Sprite.cpp"
#include "../Components/Position.cpp"
#include<ncurses.h>


class CameraSystem:public System{
private:
Camera *camera;
void update() ;
bool validate(Entity *entity);
};
#endif