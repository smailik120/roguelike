#ifndef _COLLISION_H
#define _COLLISION_H
#include "Entity.h"
#include<iostream>
using namespace std;
class Collision {  
public:  
   virtual void Action(Entity *player,Entity *another)=0;        
};  
#endif