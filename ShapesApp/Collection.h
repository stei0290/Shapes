#pragma once
//#include <Shape.h>
#include <SDLApp.h>
class Collection {
public:
	Collection();
	~Collection();
	void display(SDLApp& rcApp);
	//void addShape(Shape* cpShape);
	void moveFrom(Collection& rcMove);
	void deleteAll();

};