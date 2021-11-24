// #pragma once
#include <iostream>
#include <time.h>
#include <fstream>

#include "opencv2/imgproc.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/highgui.hpp"
#include "opencv2/calib3d.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"
#include "opencv2/stitching.hpp"
#include "opencv2/core/mat.hpp"
#include "texturemapping.h"

// #include "opencv3\opencv.hpp"
// #include "opencv3\opencv2\core.hpp"
// #include "opencv3\opencv2\xfeatures2d.hpp"
// #include "opencv3\opencv2\xfeatures2d\nonfree.hpp"


using namespace cv;
using namespace std;
// using namespace cv::detail;
using namespace cv::xfeatures2d;


Mat calculateHomography(Mat image1, Mat image2, Mat* Hmatrices);
int stitching(Mat* images, int warpType, Mat &dst, int zeroR_on);
void computeC1Params(Mat H, Mat t, double c, double theta, double ub1, double ub2, int zeroRon, Mat *params);
Point findMinLocation(Mat totalCostTable);