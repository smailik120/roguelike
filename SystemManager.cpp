#ifndef _SYSTEMMANAGER_CPP
#define _SYSTEMMANAGER_CPP 
#include<map>
#include <iostream>
#include "System.cpp"

using namespace std;
class SystemManager{
	private:
	int priority;
	map<int,System *> m;
	public:
	void start()
	{
		priority=0;
	}


	void addSystem(System *system,int priority)
	{
		m.insert(pair<int,System*>(priority,system));
	}


	void update()
	{
		System *system=m[priority];

		
			system->update();
				
	}


	void removeSystem(System *system,int priority)
	{
		m.erase(priority);
	}


	void next()
	{
		priority++;
	}


	bool isEmpty()
	{
		return m.size()==priority;
	}
};
#endif