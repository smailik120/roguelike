#include "Entity.h"
using namespace std;
	void Entity::setName(string name)
	{
		this->name=name;
	}
	void Entity::add(string name,Component *component)
	{
		m.insert(pair<string,Component *>(name,component));
	}
	void Entity::remove(string name)
	{
		m.erase(name);
	}
	string Entity::getName()
	{
		return this->name;
	}
	Component * Entity::getComponent(string name)
	{
		return m[name];
	}
