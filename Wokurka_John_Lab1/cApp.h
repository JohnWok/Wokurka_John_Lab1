#pragma once

#include "wx\wx.h"
#include "cMain.h"

//D:\Full Sail Unversity\Software Engineering\Week 1\wx317\include\wx

class cApp : public wxApp
{
public:
	cApp(); 
	~cApp(); 

private:
	cMain* m_frame1 = nullptr; 

public:
	virtual bool OnInit(); 
};

