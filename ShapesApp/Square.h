#pragma once
#include <SDLApp.h>
class Square : public Shape{
public:
	Square();
	Square(int xPos, int yPos, int sideLen);
	~Square();
	int getSidelength();
	void draw(SDLApp& rcApp);
	void draw(std::istream& rStream);
private:
	int mSideLength;
};