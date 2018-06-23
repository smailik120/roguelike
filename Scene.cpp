#include "Scene.h"

       Scene::Scene(list<Entity> &entitie){
        entities = &entitie;
        //systemManager=new SystemManager();
       // MoveSystem *move=new MoveSystem;
        //CameraSystem *camera=new CameraSystem;
       // systemManager->addSystem(move,0);
        //systemManager->addSystem(camera,1);
        //systemManager.addSystem(new CameraSystem(),1);
    }
        Scene::Scene(){
            entities = new list<Entity>;
        }
    void Scene::update(SystemManager *systemManager) {
    
        systemManager->start();
        
        while (!systemManager->isEmpty()) 
        {
           for(list<Entity>:: iterator it=entities->begin();it!=entities->end();it++)
           {
                systemManager->update();
            }
            systemManager->next();
        }
    }

    list<Entity>  & Scene::getEntities() {
        return *entities;
    }

