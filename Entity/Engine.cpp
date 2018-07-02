#include "Engine.h"

Engine::Engine()
    {
        LoaderOfFile l;
        scenes=&l.load("sosok");
        manager=&l.manager();
        list<Scene>::iterator it=scenes->begin();
        currentscene=&scenes->front();
    }
void Engine::update()
{
    currentscene->update(this->manager);
}

Scene * Engine::currentscene = NULL;

Scene * Engine::getCurrentScene() {
    return currentscene;
}
