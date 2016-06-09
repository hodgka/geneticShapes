#ifndef __point_h
#define __point_h
#include <cmath>

class Point{
	public:
		Point():x_(0),y_(0),val_(0) {};
		Point(double x,double y,double val): x_(x),y_(y),val_(val) {};

		double get_X(){return x_;}
		double get_Y(){return y_;}
		double get_Val(){return val_;}

		void set_X(double x){x_=x;}
		void set_Y(double y){y_=y;}
		void set_Val(double val){val_=val;}

		double dist(const Point& other){
			return std::sqrt(pow(getX()-other.getX(),2) + pow(getY()-other.getY(),2));
		}

	private:
		double x_;
		double y_;
		double val_;
}
#endif