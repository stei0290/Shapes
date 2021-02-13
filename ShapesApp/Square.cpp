//****************************************************************************
// File name:	 Square.cpp
// Author:     Group 9
// Date:       2/17/21
// Class:      CS 485
// Assignment: SDLApp2
// Purpose:    Implimentation for the Square class
//****************************************************************************
#include "Square.h"

Square::Square() {

}

//***************************************************************************
// Constructor:    Cricle
//
// Description: Initilizes center coordin ates and radius for Shape type 
//							circle
//			
// Parameters:  xPos				-	X postion of square
//							yPos				-	Y position of square
//							sideLength	-	side length of square
//
// Returned:    None
//***************************************************************************
Square::Square(int xPos, int yPos, int sideLength) {
	mSideLength = sideLength;
}