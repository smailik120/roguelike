#ifndef _DELETESYSTEM_H
#define _DELETESYSTEM_H
#include "Engine.h" 
//#include "System.cpp"
#include "Sprite.cpp"
#include "Position.cpp"
#include<ncurses.h>


class DeleteSystem:public System{
private:
void update() ;
bool validate(Entity *entity);
};
#endif