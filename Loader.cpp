#include "Loader.h"


Loader::Loader(){}

SystemManager & Loader::manager(){
    systemManager=new SystemManager();
    MoveSystem *move=new MoveSystem;
    CameraSystem *camera=new CameraSystem;
    systemManager->addSystem(move,0);
    systemManager->addSystem(camera,1);
    systemManager->addSystem(new CameraSystem(),1);
    return *systemManager;
}

    list<Scene>  &Loader::load(string path)
    {
        
        list<Entity> *p=new list<Entity>;
        list<Scene> *scenes=new list<Scene>;
        Entity entity;
        Position *position=new Position(5,5);
        Velocity *velocity=new Velocity(1,1);
        Sprite *sprite=new Sprite();
        sprite->setTexture("@");
      //  position.setX((float)5);
        //position.setY((float)5);
        entity.add("position",position);
        entity.add("velocity",velocity);
        entity.add("sprite",sprite);
        p->push_front(entity);
        
        Scene scene(*p);
        scenes->push_front(scene);
        
        return *scenes;
    }
    
