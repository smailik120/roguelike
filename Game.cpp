#include "Engine.h"
#include<iostream>
#include<typeinfo>
#include "Position.cpp"
#include<ncurses.h>
#include "Entity.cpp"
#include "LoaderOfFile.cpp"
#include "Engine.cpp"
#include "Scene.cpp"
#include "MoveSystem.cpp"
#include "CameraSystem.cpp"
#include "InputSystem.cpp"
#include <unistd.h>
using namespace std;

int main(int argc,char *argv[])
{
    int i=0;
    initscr();
    //scrollok( stdscr, true );
    keypad(stdscr, true);   //Включаем режим чтения функциональных клавиш
    noecho();               //Выключаем отображение вводимых символов, нужно для getch()
    halfdelay(10);         //Устанавливаем ограничение по времени ожидания getch() в 10 сек

    Engine engine;
    //player последний в списке
    list<Entity> *entities=&Engine::getCurrentScene()->getEntities();

        while(true)
        {
            sleep(0.1);
            
            engine.update();
            
            refresh();
            
            int ch=getch();
            
            if(ch==119)
            {
                
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
 
                vel->setSpeedY(0);
                vel->setSpeedX(-1);
                pos->setX(pos->getX()+vel->getSpeedX());
            }
            
            else if(ch==97)
            {
                
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
                
                vel->setSpeedY(-1);
                vel->setSpeedX(0);
                pos->setY(pos->getY()+vel->getSpeedY()); 
            }
            else if(ch==115)
            {
                
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
                
                vel->setSpeedY(0);
                vel->setSpeedX(1);
                pos->setX(pos->getX()+vel->getSpeedX()); 
            }
            else if(ch==100)
            {
                 
                Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
                Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
                vel->setSpeedY(1);
                vel->setSpeedX(0);
                pos->setY(pos->getY()+vel->getSpeedY()); 
            }
            
            //cout<<ch<<" ";
            
            clear();
            //printw("2");
            //cout<<pos->getX()<<" ";  
          //  i++; 
            
            }
            

        
        getch();
        endwin();
        
        return 0;
}