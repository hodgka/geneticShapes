#ifndef __polygon_h
#define __polygon_h

#include <iostream>
#include <utility>
#include <vector>
#include <iostream>
#include "mtrand.h"
#include "Point.h"


class Point;
class Polygon: public{
public:
	Polygon(): vertices_(NULL),r_(0),g_(0),b_(0),size_(0) {};
	Polygon(vector<Point*> vertices,int r,int g,int b);

	int get_Vertices() const {return vertices_;}
	int get_R() const {return r_;}
	int get_G() const {return g_;}
	int get_B() const {return b_;}
	int get_Size() const {return size_;}
	Point* get_Centroid() const {return centroid_;}
	double get_Transparency() const {return transparency_;}

	void add_Vertex(const Point& p) {
		vertices_.push_back(p); size_+=1;
	}
	//change color using rgb values
	void change_Color(int r,int g,int b){
		r_=r; g_=g; b_=b;
	}
	//change color using hex values
	void change_Color(std::string& hex_Value);

	void calculate_Centroid();
	void change_Transparency(double val){
		transparency_= val;
	}
	

private:
	std::vector<Point*> vertices_;
	int r_;
	int g_;
	int b_;
	int size_;
	double transparency_;
	Point* centroid_;
}


#endif