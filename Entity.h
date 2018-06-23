#ifndef _ENTITY_CPP
#define _ENTITY_CPP 
#include<map>
#include<cstring>
#include "Component.cpp"
#include<iostream>
using namespace std;
class Entity{
	private:
	map<string,Component *> m;
	public:
	void add(string name,Component *component);
	void remove(string name);
	Component *getComponent(string name);
};
#endif