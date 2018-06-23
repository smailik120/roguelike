#include "Engine.h"
#include<iostream>
#include<typeinfo>
#include "Position.cpp"
#include<ncurses.h>
#include "Entity.cpp"
#include "Loader.cpp"
#include "Engine.cpp"
#include "Scene.cpp"
#include "MoveSystem.cpp"
#include "CameraSystem.cpp"
using namespace std;
int main(int argc,char *argv[])
{
    int i=0;
    initscr();
    keypad(stdscr, true);   //Включаем режим чтения функциональных клавиш
    noecho();               //Выключаем отображение вводимых символов, нужно для getch()
    halfdelay(100);         //Устанавливаем ограничение по времени ожидания getch() в 10 сек
    Engine engine;
    
    bool ex=false;
    Scene *scene= engine.getCurrentScene();
    list<Entity> entity=scene->getEntities();
    list<Entity>::iterator it=entity.begin();
    Entity ent=entity.front();
    
       //cout<<typeid(*ent.getComponent("position")).name();
    Position *pos=static_cast<Position *>((ent.getComponent("position")));
        while(i!=10)
        {
           
            clear();
            refresh();
            engine.update();
            //printw("2");
            //cout<<pos->getX()<<" ";   
            
            i++;
        }
        getch();
        endwin();
        
        return 0;
}