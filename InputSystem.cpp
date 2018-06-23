#include "InputSystem.h"


using namespace std;
    InputSystem::InputSystem(){
   /* initscr();
    //scrollok( stdscr, true );
    keypad(stdscr, true);   //Включаем режим чтения функциональных клавиш
    noecho();               //Выключаем отображение вводимых символов, нужно для getch()
    halfdelay(100);         //Устанавливаем ограничение по времени ожидания getch() в 10 сек){};
    */
    }
    void InputSystem::update() 
    {
        /*
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
*/        
        //int ch=getch();
        //if(ch==119)
       // {
        //    printw("2");
        //   Position *pos=static_cast<Position *>((entities->back()).getComponent("position"));
       //    Velocity *vel=static_cast<Velocity *>((entities->back()).getComponent("velocity"));
       //    pos->setY(pos->getY()+vel->getSpeed()); 
       // }
    
    
    }
    bool InputSystem::validate(Entity *entity)
    {
        
       return true;
        
    }