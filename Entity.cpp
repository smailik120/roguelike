#include "Entity.h"
using namespace std;

	void Entity::add(string name,Component *component)
	{
		m.insert(pair<string,Component *>(name,component));
	}
	void Entity::remove(string name)
	{
		m.erase(name);
	}
	Component * Entity::getComponent(string name)
	{
		return m[name];
	}
