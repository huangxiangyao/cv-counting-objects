## About
This is a C++ project that uses OpenCV to count the number of detected objects found in an image. The counting is done via an image processing technique known as "Haar Feature-based Cascade Classifier."  Items in a scene are detected and the final number of counted objects is printed.

For more information on Cascade Classification, refer to OpenCV's documentation on the function here: http://docs.opencv.org/2.4/modules/objdetect/doc/cascade_classification.html
 
## Running
The prerequisite is that you need to have the OpenCV library installed.  Refer to some tutorials on how to do that.

Depending on what you want to detect, change the cascade classifier string "cascadeFile" in cascadeCount.cpp.  It is currently set to a cascade classifier that detects bananas in an image.

Build the program by running 
```
./build.sh
```

Run the output with one argument as the path to the image you want to perform counting on.  Example:
```
./cascadeCount ~/images/mydog.jpg
```

## Cascade Classifiers
This repo comes with "banana_classifier.xml" that will count the number of bananas.  You can use other ones that come with OpenCV such as the classifier that counts number of faces.  Cascade classfier creation, however, takes a while and is a bit of an effort.  For information on how to create one, refer to this page (it is also the source for the banana_classifier.xml file!): http://coding-robin.de/2013/07/22/train-your-own-opencv-haar-classifier.html

