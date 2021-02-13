//****************************************************************************
// File name:	main.cpp
// Author:		Chadd Williams
// Date:		  12/14/2016
// Class:		  CS 485
// Assignment:Simple_Shapes_Shalloway
// Purpose:		Demonstrate simple oo design with Shapes example from Shalloway
//            chapter 1
//****************************************************************************

#include <iostream>
#include <fstream>
#include "ShapesApp.h"
#include "Collection.h"
#include "ShapeDataBase.h"
#include "Circle.h"
//#include "vld.h"

//***************************************************************************
// Function:    main
//
// Description: Load the ShapesApp and start the game loop
//
// Parameters:  argc - count of command line args
//							argv - the command line args
//
// Returned:    int - EXIT_SUCCESS
//***************************************************************************
int main(int argc, char *argv[])
{
  ShapesApp cTheDisplay;
  
  
  cTheDisplay.createWindow("Test Simple Shapes and SDL Wrapper");
  cTheDisplay.setWindowBackgroundColor ({ 255, 255, 255, 255 });

  cTheDisplay.gameLoop();

  cTheDisplay.cleanup ();

  return EXIT_SUCCESS;
}