#include<map>
#include<iostream>
#include <fstream>
#include "../Components/Component.cpp"
#include "../Components/Velocity.cpp"
#include "Entity.cpp"
#include "CreatePlayer.cpp"
#include<list>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
Entity create(string s)
{
Entity entity;

if(s.find("Position"))
{
string start=s.substr(s.find("Position")+10);
int posEnd=start.find(")");
string posAll=start.substr(0,posEnd);
string posX=posAll.substr(0,posAll.find(";"));
string posY=posAll.substr(posX.length()+1,posAll.find(")"));
float x = ::strtod(posX.c_str(), 0);
float y = ::strtod(posY.c_str(), 0);
Position *position=new Position(x,y);
entity.add("position",position);
}
if(s.find("Velocity"))
{
string start=s.substr(s.find("Velocity")+10);
int posEnd=start.find(")");
string posAll=start.substr(0,posEnd);
string speedX=posAll.substr(0,posAll.find(";"));
string tempY=posAll.substr(speedX.length()+1,posAll.find(")"));
string speedY=posAll.substr(speedX.length()+1,posAll.find(";"));
string speedA=tempY.substr(tempY.find(";")+1);
float x = ::strtod(speedX.c_str(), 0);
float y = ::strtod(speedY.c_str(), 0);
float a = ::strtod(speedA.c_str(), 0);
Velocity *velocity=new Velocity(x,y,a);
entity.add("velocity",velocity);
}
if(s.find("Sprite"))
{
string start=s.substr(s.find("Sprite")+8);
int spriteEnd=start.find(")");
string spriteAll=start.substr(0,spriteEnd);
const char *image = &spriteAll[0];
cout<<image;
 Sprite *sprite=new Sprite();
 sprite->setTexture('2');
entity.add("sprite",sprite);
}
if(s.find("Name"))
{
    string tempName=s.substr(s.find("Name")+6);
    entity.setName(tempName.substr(0,tempName.find(")")));
    
}
return entity;
}
int main(int argc, char* argv[])
{
    list<Entity> *p=new list<Entity>;
    ifstream fin("test.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    string s;
    while(fin>>s){
    p->push_back(create(s));
    
    }
  //  cout<<p->size();
    fin.close(); // закрываем файл

    return 0;
}