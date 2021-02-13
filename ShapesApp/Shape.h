#pragma once
#include <Color.h>
#include <SDLApp.h>
using namespace std;
class Shape {
public:
	Shape(int xPos, int yPos);
	~Shape();
	virtual void draw(SDLApp& rcApp) = 0;
	void read(std::istream& rStream);
protected:
	int getX();
	int getY();
	Color getColor();
private:
	int mX;
	int mY;
	Color mcColor;

	//Impliment this friend somwehow
//<<friend>> operator>>(std::istream inStream, Shape & rcShape);
};
