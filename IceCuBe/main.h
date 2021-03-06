///////////////////////////////////////////////////////////////////////////////
// main.h
// IceCuBe
//
// © Rohit Yadav, 2008-2009.
// License: GNU GPL v2 or later
// ALL RIGHTS RESERVED.
///////////////////////////////////////////////////////////////////////////////

#ifndef MAIN_H
#define MAIN_H

#include <wx/wx.h>
#include "splash.h"
#include "mainframe.h"

///////////////////////////////////////////////////////////////////////////////
/// Enumerations
///////////////////////////////////////////////////////////////////////////////
enum
{
  ID_COMMAND_CENTER	= 1000
};

///////////////////////////////////////////////////////////////////////////////
/// Class IceCuBe
///////////////////////////////////////////////////////////////////////////////

class IceCuBe : public wxApp
{
  public:
    virtual bool OnInit();

  private:
	CarbonSplash* SplashScreen;
	MainFrame*    CommandCenter;
};

#endif //MAIN_H

