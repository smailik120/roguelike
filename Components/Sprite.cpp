#include "Component.cpp"
#ifndef _SPRITE_CPP
#define _SPRITE_CPP 
class Sprite:public Component{
private:
     char texture;
public:
    void setTexture(char Texture)
    {
        texture=Texture;
        
    }
    const char getTexture()
    {
        
        return texture;
    }
};
#endif