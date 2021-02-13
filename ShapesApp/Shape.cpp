//****************************************************************************
// File name:	 Shape.cpp
// Author:     Group 9
// Date:       2/17/21
// Class:      CS 485
// Assignment: SDLApp2
// Purpose:    Implimentation for the shape class
//****************************************************************************
#include "Shape.h"
//Still need to implimnet Draw operrator overlaod and Read

//***************************************************************************
// Constructor: Shape
//
// Description:	Initialzes x-postition y-postion.
//
// Parameters:  xPos	-	xPosistion for center of circle
//							yPos	-	yPostition for center of circle
//
// Returned:    None
//***************************************************************************
Shape::Shape(int xPos, int yPos) {
	mX = xPos;
	mY = yPos;
	//Do we need to set color here?
}

//***************************************************************************
// Function:		getX
//
// Description: Returns xValue of shape
//
// Parameters:  none
//
// Returned:		x-postion of shape
//***************************************************************************
int Shape::getX() {
	return mX;
}

//***************************************************************************
// Function:		getY
//
// Description: Returns yValue of shape
//
// Parameters:  none
//
// Returned:		y-postion of shape
//***************************************************************************
int Shape::getY() {
	return mY;
}

//***************************************************************************
// Function:		getColor
//
// Description: Returns Color of shape
//
// Parameters:  none
//
// Returned:		Color of shape
//***************************************************************************
Color Shape::getColor() {
	return mcColor;
}
