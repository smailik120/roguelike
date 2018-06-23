#ifndef _CAMERASYSTEM_H
#define _CAMERASYSTEM_H
#include "Engine.h" 
//#include "System.cpp"
#include "Camera.cpp"
#include "Sprite.cpp"
#include "Position.cpp"
#include<ncurses.h>


class CameraSystem:public System{
private:
Camera *camera;
void update() ;
bool validate(Entity *entity);
};
#endif