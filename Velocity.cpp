#include "Component.cpp"
#ifndef _VELOCITY_CPP
#define _VELOCITY_CPP
class Velocity :public Component{
private:
int speed;
int a;
public: 
	Velocity(int speed,int a)
	{
		this->speed=speed;
		this->a=a;
	}
	void setSpeed(int speed)
	{
		this->speed=speed;
	}
	void setA(int a)
	{
		this->a=a;
	}
	int getSpeed()
	{
	return speed;
	}
};
#endif	
