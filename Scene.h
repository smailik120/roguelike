#ifndef _SCENE_H
#define _SCENE_H
#include "Entity.h"
#include "SystemManager.cpp"
//#include "MoveSystem.cpp"
//#include "CameraSystem.cpp"
#include<list>
#include<iterator>
class Scene {
private:
    //SystemManager *systemManager;
    list<Entity> *entities;
    list<Entity> *velocityEntities;
public: 

        Scene(list<Entity> &entitie);
        //systemManager=new SystemManager();
       // MoveSystem *move=new MoveSystem;
        //CameraSystem *camera=new CameraSystem;
       // systemManager->addSystem(move,0);
        //systemManager->addSystem(camera,1);
        //systemManager.addSystem(new CameraSystem(),1);
    
        Scene();
    void update(SystemManager *systemManager);

    list<Entity> &getEntities();
    list<Entity> &getVelocityEntities();
};
#endif
