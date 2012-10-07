#include "stdafx.h"
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

int _tmain(int argc, _TCHAR* argv[])
{
        IplImage *img = cvLoadImage("images.jpg");
        cvNamedWindow("Image:",1);
        cvShowImage("image:",img);

        cvWaitKey();
        cvDestroyWindow("Image:");
        cvReleaseImage(&img);

        return 0;
}
