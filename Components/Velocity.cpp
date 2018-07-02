#include "Component.cpp"
#ifndef _VELOCITY_CPP
#define _VELOCITY_CPP
class Velocity :public Component{
private:
int speedx;
int speedy;
int a;
public: 
	Velocity(int speedx,int speedy,int a)
	{
		this->speedx=speedx;
		this->speedy=speedy;
		this->a=a;
	}
	void setSpeedX(int speed)
	{
		this->speedx=speed;
	}
	void setSpeedY(int speed)
	{
		this->speedy=speed;
	}
	void setA(int a)
	{
		this->a=a;
	}
	int getSpeedX()
	{
	return speedx;
	}
	int getSpeedY()
	{
		return speedy;
	}
};
#endif	
