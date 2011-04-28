/*
-----------------------------------------------------------------------------
Filename:    TutorialApplication.h
-----------------------------------------------------------------------------

This source file is part of the
   ___                 __    __ _ _    _ 
  /___\__ _ _ __ ___  / / /\ \ (_) | _(_)
 //  // _` | '__/ _ \ \ \/  \/ / | |/ / |
/ \_// (_| | | |  __/  \  /\  /| |   <| |
\___/ \__, |_|  \___|   \/  \/ |_|_|\_\_|
      |___/                              
      Tutorial Framework
      http://www.ogre3d.org/tikiwiki/
-----------------------------------------------------------------------------
*/
#ifndef __TutorialApplication_h_
#define __TutorialApplication_h_

#include "stdafx.h"
#include "BaseApplication.h"
#include "MotionPath.h"
#include "DynamicLines.h"
#include <OgreSimpleSpline.h>

class TutorialApplication : public BaseApplication
{
public:
    TutorialApplication(void);
    virtual ~TutorialApplication(void);

protected:
	/*Taken from Ogre Basic tutorial 2*/
	virtual void createScene(void);
	virtual void createCamera(void);
	virtual void createViewports(void);

	// needed for user input
	virtual bool mousePressed( const OIS::MouseEvent &arg, OIS::MouseButtonID id );

private:
	Ogre::Plane * mPlane;
	MotionPath * mPath;
        Ogre::SimpleSpline *spline;
	DynamicLines *lines;
	Ogre::SceneNode *linesNode;
};

#endif // #ifndef __TutorialApplication_h_
