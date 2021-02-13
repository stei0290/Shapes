//****************************************************************************
// File name:	 main.cpp
// Author:     Chadd Williams
// Date:       5/17/2017
// Class:      CS 485
// Assignment: SDLTextWidgetExample
// Purpose:    Demonstrate how to use SDLTextWidget
//****************************************************************************


#include "SDLTextWidgetExample.h"

//***************************************************************************
// Function:    main
//
// Description: Create the SDLApp window and launch game loop
//
// Parameters:  argc - number of command line arguments
//              argv - the command line arguments
//
// Returned:    int - EXIT_SUCCESS
//***************************************************************************
int main (int argc, char *argv[])
{
  SDLTextWidgetExample cTheDisplay;


  cTheDisplay.createWindow ("Test SDLTextWidget SDL Wrapper");
  cTheDisplay.setWindowBackgroundColor ({ 255, 255, 255, 255 });

  cTheDisplay.gameLoop ();

  cTheDisplay.cleanup ();

  return EXIT_SUCCESS;
}