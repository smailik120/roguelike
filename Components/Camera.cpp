#ifndef _CAMERA_CPP
#define _CAMERA_CPP 
#include "Component.cpp"
class Camera:public Component{
private:
    float x;
    float y;
    float width;
    float height;
public:
    Camera(float x,float y,float width,float height)
    {
        this->x=x;
        this->y=y;
        this->width=width;
        this->height=height;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    float getWidth()
    {
        return width;
    }
    float getHeight()
    {
        return height;
    }
};
#endif