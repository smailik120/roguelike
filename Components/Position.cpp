#ifndef _Position_CPP
#define _Position_CPP 

#include "Component.cpp"
class Position : public Component{
private: 
	float x;
	float y;
public:
	Position(){};
	Position(float x1,float y1)
	{
		x=x1;
		y=y1;
	}
	void setX(float x1)
	{
		x=x1;
	}
	void setY(float y1)
	{
		y=y1;
	}
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
};
#endif