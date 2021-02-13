//****************************************************************************
// File name:	 SDLTextWidgetExample.cpp
// Author:     Chadd Williams
// Date:       5/17/2017
// Class:      CS 485
// Assignment: SDLTextWidgetExample
// Purpose:    Demonstrate how to use SDLTextWidget
//****************************************************************************
#include "SDLTextWidgetExample.h"

//***************************************************************************
// Constructor: SDLTextWidgetExample
//
// Description: Load fonts, add text widgets, setup text input and event 
//              handler
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
SDLTextWidgetExample::SDLTextWidgetExample ()
{

  // load fonts
  mInputFont = loadFont ("c:/Windows/Fonts/Cour.TTF", 20);
  mOutputFont = loadFont ("c:/Windows/Fonts/consola.ttf", 20);

  // create text widgets
  // set label, position, font, and color
  mpcTextInput = new SDLTextWidget ("Input", "", 10, 300,
    mInputFont, { 0,0,0,255 });

  mpcTextOutput = new SDLTextWidget ("Output", "", 10, 450,
    mOutputFont, { 0,0,0,255 });

  // turn on textInput in SDLApp
  enableTextInput ();

  // enable text input for mpcTextInput
  registerTextWidget (mpcTextInput);


  // connect the mpcTextInput to an event handler
  // this event handler is called only when the user
  // select the widget and then presses enter
  mpcTextInput->registerStateChangeEventHandler
  (std::bind
  (&SDLTextWidgetExample::onTextInput, this));

}

//***************************************************************************
// Destructor:  SDLTextWidgetExample
//
// Description: Destroy the two text widgets
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************

SDLTextWidgetExample::~SDLTextWidgetExample ()
{
  delete mpcTextInput;
  delete mpcTextOutput;
}

//***************************************************************************
// Function:    render
//
// Description: Draw both text widgets to the screen
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************

void SDLTextWidgetExample::render ()
{
  mpcTextInput->draw (*this);
  mpcTextOutput->draw (*this);
}

//***************************************************************************
// Function:    onTextInput
//
// Description: Pull data from the input text widget and copy to the output
//              text widget. Blank out the input text widget data
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************

void SDLTextWidgetExample::onTextInput ()
{
  mpcTextOutput->setData (mpcTextInput->getData ());
  mpcTextInput->setData ("");
}
