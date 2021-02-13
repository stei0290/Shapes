#pragma once
#include <SDLApp.h>
class Circle : public Shape {
public:
	Circle();
	Circle(int xPos, int yPos, int radius);
	~Circle();
	
	void draw(SDLApp& rcCircle);
	void read(std::istream& rStream);
private:
	int mRadius;
};