#include "Component.cpp"
#ifndef _SPRITE_CPP
#define _SPRITE_CPP 
class Sprite:public Component{
private:
    const char *texture;
public:
    void setTexture(const char *texture)
    {
        this->texture=texture;
    }
    const char *getTexture()
    {
        return texture;
    }
};
#endif