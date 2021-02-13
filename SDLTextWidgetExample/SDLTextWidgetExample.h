//****************************************************************************
// File name:	 SDLTextWidgetExample.h
// Author:     Chadd Williams
// Date:       5/17/2017
// Class:      CS 485
// Assignment: SDLTextWidgetExample
// Purpose:    Demonstrate how to use SDLTextWidget
//****************************************************************************
#pragma once
#include "SDLApp.h"
#include "SDLTextWidget.h"

class SDLTextWidgetExample : public SDLApp
{
public:

  SDLTextWidgetExample ();
  ~SDLTextWidgetExample ();

  virtual void render ();

private:

  void onTextInput ();

  SDLTextWidget *mpcTextInput;
  SDLTextWidget *mpcTextOutput;
  int mInputFont;
  int mOutputFont;
};