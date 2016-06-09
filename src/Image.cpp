#ifndef __image_h
#define __image_h

#include <vector>
#include "Polygon.h"
#include <iostream>


class Image{
public:
	Image(): r_(0),g_(0),b_(0),h_(0),w_(0) {}
	Image(int r,int g, int b, int w,int h);

	double get_ImgDiff() const {return imgdiff_;}

	void calculate_ImgDiff(const std::string& imgPath);
private:
	std::vector<Polygon*> shapes_;
	double similarity_;
 	int r_;
 	int g_;
 	int b_;
 	int w_;
 	int h_;
 	double imgdiff_;
}


#endif
