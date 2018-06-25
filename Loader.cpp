#include "Loader.h"


Loader::Loader(){}

SystemManager & Loader::manager(){
    systemManager=new SystemManager();
    MoveSystem *move=new MoveSystem;
    CameraSystem *camera=new CameraSystem;
    systemManager->addSystem(camera,2);
    systemManager->addSystem(move,1);
    systemManager->addSystem(new InputSystem,0);
    return *systemManager;
}

    list<Scene>  &Loader::load(string path)
    {
        
        list<Entity> *p=new list<Entity>;
        list<Scene> *scenes=new list<Scene>;
        Entity entity;
        Position *position=new Position(5,5);
        Position *posBrick=new Position(10,10);
        Velocity *velocity=new Velocity(1,1,1);
        Sprite *spritePlayer=new Sprite();
        Sprite *spriteBrick=new Sprite();
        spriteBrick->setTexture("X");
        spritePlayer->setTexture("@");
        Sprite *spriteBlock=new Sprite();
        spriteBlock->setTexture(".");
      //  position.setX((float)5);
        //position.setY((float)5);
        entity.add("position",position);
        entity.add("velocity",velocity);
        entity.add("sprite",spritePlayer);
        entity.setName("player");
        p->push_back(entity);
        
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                Entity entity;
                entity.add("position",new Position(i,j));
                entity.add("sprite",spriteBlock);
                entity.setName("block");
                p->push_front(entity);
            }
        }
        Entity brick;
        brick.setName("brick");
        brick.add("position",posBrick);
        brick.add("sprite",spriteBrick);
        p->push_front(brick);
        
        Scene scene(*p);
        scenes->push_front(scene);
        
        return *scenes;
    }
    
