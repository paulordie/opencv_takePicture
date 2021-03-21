#include <iostream>

#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

int main() {
    VideoCapture capture(1, CAP_V4L);
    Mat picture;
    if (capture.isOpened()){
        capture >> picture;
        imshow("picuture", picture);
        waitKey();
    }

    imwrite("saved.jpg", picture);


}
