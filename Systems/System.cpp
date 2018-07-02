#ifndef _SYSTEM_CPP
#define _SYSTEM_CPP 
#include "../Entity/Entity.h"
#include<iostream>
using namespace std;
class System {  
public:  
   virtual void update()=0;    
   virtual bool validate(Entity *entity) = 0;     
};  
#endif