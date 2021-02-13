//****************************************************************************
// File name:	ShapesApp.h
// Author:		Chadd Williams
// Date:		  12/14/2016
// Class:		  CS 485
// Assignment:Simple_Shapes_Shalloway
// Purpose:		Subclass SDLApp to create an application
//****************************************************************************

#include "ShapesApp.h"
#include "ShapeDataBase.h"

//***************************************************************************
// Constructor: ShapesApp
//
// Description: Initialize the App
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************

ShapesApp::ShapesApp ()
{
  mFileFont = loadFont ("c:/Windows/Fonts/Cour.TTF", 20);
  mpcFileInput = new SDLTextWidget ("File", "", 10, 600,
    mFileFont, { 0,0,0,255 });
  enableTextInput ();

  registerTextWidget (mpcFileInput);

  mpcFileInput->registerStateChangeEventHandler
  (std::bind
  (&ShapesApp::onFileAdd, this));
}

//***************************************************************************
// Destructor: ShapesApp
//
// Description: Delete the App
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
ShapesApp::~ShapesApp ()
{
	mcTheCollection.deleteAll ();
  delete mpcFileInput;
}

//***************************************************************************
// Function:    render
//
// Description: Display the shapes and text widget to the screen
//
// Parameters:  none
//
// Returned:    none
//***************************************************************************
void ShapesApp::render()
{
  mcTheCollection.display(*this);
  mpcFileInput->draw (*this);
}


//***************************************************************************
// Function:    onFileAdd
//
// Description: Callback function for handling text input
//							
// Parameters:  none
//
// Returned:    none
//***************************************************************************
void ShapesApp::onFileAdd ()
{
  ShapeDataBase cShapeDB;
  Collection cTheCollection;

  cShapeDB.openDatabase (mpcFileInput->getData());
  cShapeDB.getCollection (cTheCollection);
  cShapeDB.closeDatabase ();

  mcTheCollection.moveFrom (cTheCollection);

  mpcFileInput->setData ("");

}
