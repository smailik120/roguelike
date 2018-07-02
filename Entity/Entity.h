#ifndef _ENTITY_H
#define _ENTITY_H 
#include<map>
#include<cstring>
#include "../Components/Component.cpp"
#include<iostream>
#include<iterator>
using namespace std;
class Entity{
	private:
	map<string,Component *> m;
	public:
	string name;
	void add(string name,Component *component);
	void remove(string name);
	void setName(string name);
	Component *getComponent(string name);
	string getName();
	void dispose();
};
#endif