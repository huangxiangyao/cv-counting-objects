#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main( int argc, char **argv )
{
  //First check for invalid number of inputs
  if (argc < 2) {
    cerr << "Invalid number of inputs" << endl;
    return 0;
  }

  //Load the cascade classifier file
  CascadeClassifier cascadeDetect;
  string cascadeFile = "./banana_classifier.xml";

  if (!cascadeDetect.load(cascadeDetect)) {
    cerr << "Error loading the classifier file" << endl;
    return 0;
  }

  //Load the image that was passed in as the argument
  Mat inFrame = imread(argv[1]);
  if (inFrame.empty()) {
    cerr << "Error loading the image that was passed in" << endl;
    return 0;
  }

  //Do some preprocessing to the image
  Mat procFrame;
  cvtColor(inFrame, procFrame, CV_BGR2GRAY);
  equalizeHist(procFrame, procFrame);

  //Look for matches and store them into our vector
  vector<Rect> detected;
  cascadeDetect.detectMultiScale(procFrame, detected, 1.1, 2, 0, Size(80,80));

  cout << "The number of faces detected: " << detected.size() << endl;

  return 1;
}
