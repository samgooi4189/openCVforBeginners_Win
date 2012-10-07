openCVforBeginners_Win
======================

OpenCV2.4 for Visual Studio 2010

<h2>Grab the source code</h2>

Download opencv.

Extract opencv to C:\

<h2>Building the binaries</h2>

Download cmake. Open the cmake gui..

Where is the source code: C:/opencv

Where to build the binaries: C:/opencv/build

Click Configure - for the generator choose Visual Studio 10 Click Generate.

In C:\opencv\build you should now see OpenCV.sln.

Open the solution file with VS C++ Express and build it.

<h2>Setting up the hello world project</h2>

Create a new project in VS. Choose console application and leave precompiled headers ticked. Right-click on solution file and choose properties.

In the VC++ Directories window, add the following:

Include Directories: C:\opencv\build\include;C:\opencv\build\include\opencv;C:\opencv\build\include\opencv2

Library Directories: C:\opencv\build\lib\Debug

Source Directories: C:\opencv\build\include

In C++ -> Linker -> Input, add the following to Additional Dependencies:

opencv_core242d.lib
opencv_highgui242d.lib

<h2>Hello World Content</h2>

Change the content as suggested in the tutorial to:

#include "stdafx.h"
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

int _tmain(int argc, _TCHAR* argv[])
{
        IplImage *img = cvLoadImage("funny-pictures-cat-goes-pew.jpg");
        cvNamedWindow("Image:",1);
        cvShowImage("image:",img);

        cvWaitKey();
        cvDestroyWindow("Image:");
        cvReleaseImage(&img);

        return 0;
}

Place the image (or any image) in your project directory.

Now build and hit Debug, and it should work. Hope this helps someone.

<h3>Missing opencv_core242d.dll?</h3>
Go to Properties under My Computer >> Advanced System Settings >> Environment Variables >> 
Add  "C:\opencv\bin\Debug" to path
Restart your PC
run your executable