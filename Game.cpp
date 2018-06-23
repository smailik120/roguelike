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
#include "InputSystem.cpp"
using namespace std;

int main(int argc,char *argv[])
{
    int i=0;
    initscr();
    //scrollok( stdscr, true );
    keypad(stdscr, true);   //Включаем режим чтения функциональных клавиш
    noecho();               //Выключаем отображение вводимых символов, нужно для getch()
    halfdelay(100);         //Устанавливаем ограничение по времени ожидания getch() в 10 сек
    Engine engine;
        while(true)
        {
              int ch=getch();
            list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
            if(ch==119)
            {
                list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
                pos->setX(pos->getX()-vel->getSpeed()); 
            }
            else if(ch==97)
            {
                 list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
                pos->setY(pos->getY()-vel->getSpeed()); 
            }
            else if(ch==115)
            {
                list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
                pos->setX(pos->getX()+vel->getSpeed()); 
            }
            else if(ch==100)
            {
                 list<Entity> *entities=&Engine::getCurrentScene()->getEntities();
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
                pos->setY(pos->getY()+vel->getSpeed()); 
            }
            //cout<<ch<<" ";
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