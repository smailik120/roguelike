#ifndef _ENGINE_H
#define _ENGINE_H

#include<list>
#include<iterator>
#include "Scene.h"
#include "../Loader/LoaderOfFile.h"
#include "../Systems/SystemManager.cpp"
class Engine {
private:
    SystemManager *manager;
    list<Scene> *scenes;
public: 
    static Scene * currentscene;
    Engine();
    void update();
    static Scene *getCurrentScene();
};


#endif
