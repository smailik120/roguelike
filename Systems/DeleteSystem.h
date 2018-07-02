#ifndef _DELETESYSTEM_H
#define _DELETESYSTEM_H
#include "../Entity/Engine.h" 
//#include "System.cpp"
#include "../Components/Sprite.cpp"
#include "../Components/Position.cpp"
#include<ncurses.h>


class DeleteSystem:public System{
private:
void update() ;
bool validate(Entity *entity);
};
#endif