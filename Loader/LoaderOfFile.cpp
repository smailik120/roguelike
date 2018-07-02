#include "LoaderOfFile.h"


LoaderOfFile::LoaderOfFile(){

}
Entity LoaderOfFile::create(string s)
{
Entity entity;

if(s.find("Position")!=-1)
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
if(s.find("Velocity")!=-1)
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
if(s.find("Sprite")!=-1)
{
 
string start=s.substr(s.find("Sprite")+8);
int spriteEnd=start.find(")");
string spriteAll=start.substr(0,spriteEnd);
Sprite *sprite=new Sprite();
sprite->setTexture(spriteAll[0]);
entity.add("sprite",sprite);
}
if(s.find("Score")!=-1)
{
 
string start=s.substr(s.find("Score")+7);
int scoreEnd=start.find(")");
string scoreAll=start.substr(0,scoreEnd);
Score *score=new Score();
int x = ::strtod(scoreAll.c_str(), 0);
score->setScore(x);
entity.add("score",score);
}
if(s.find("Name")!=-1)
{
    string tempName=s.substr(s.find("Name")+6);
    entity.setName(tempName.substr(0,tempName.find(")")));
    
}
return entity;
}
SystemManager & LoaderOfFile::manager(){
    systemManager=new SystemManager();
    MoveSystem *move=new MoveSystem;
    CameraSystem *camera=new CameraSystem;
    systemManager->addSystem(camera,1);
    systemManager->addSystem(move,0);
    systemManager->addSystem(new DeleteSystem,2);
    return *systemManager;
}

    list<Scene>  &LoaderOfFile::load(string path)
    {
        
        list<Entity> *p=new list<Entity>;
        list<Scene> *scenes=new list<Scene>;
        
    ifstream fin("test.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    string s;
    while(fin>>s){
    Entity entity=create(s);
    p->push_back(entity);
    
    }
    fin.close(); // закрываем файл

        
        Scene scene(*p);
        scenes->push_front(scene);
        
        return *scenes;
    }
    
