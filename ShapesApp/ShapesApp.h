//****************************************************************************
// File name:	ShapesApp.h
// Author:		Chadd Williams
// Date:		  12/14/2016
// Class:		  CS 485
// Assignment:Simple_Shapes_Shalloway
// Purpose:		Subclass SDLApp to create an application
//****************************************************************************

#pragma once
#include "SDLApp.h"
#include "Collection.h"
#include "SDLTextWidget.h"

class ShapesApp : public SDLApp
{
public:

  ShapesApp ();
  ~ShapesApp ();

  virtual void render();

private:

  void onFileAdd ();

  Collection mcTheCollection;
  SDLTextWidget *mpcFileInput;
  int mFileFont;
};