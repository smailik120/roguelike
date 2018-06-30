#include "Scene.h"

       Scene::Scene(list<Entity> &entitie){
        entities = &entitie;
        velocityEntities=new list<Entity>;
        
         for(list<Entity>:: iterator it=entities->begin();it!=entities->end();it++)
          {
            
            
               if(((&(*it))->getComponent("velocity"))!=NULL){
                  //cout<<1<<"   ";
                   Entity entity=*it;
                   //entities->push_back(entity);
                   velocityEntities->push_back(entity);
               }
           }
          // cout<<"exit";
        //systemManager=new SystemManager();
       // MoveSystem *move=new MoveSystem;
        //CameraSystem *camera=new CameraSystem;
       // systemManager->addSystem(move,0);
        //systemManager->addSystem(camera,1);
        //systemManager.addSystem(new CameraSystem(),1);
    }
        Scene::Scene(){
            entities = new list<Entity>;
            velocityEntities=new list<Entity>;
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
    list<Entity>  & Scene::getVelocityEntities() {
    
        return *velocityEntities;
    }

