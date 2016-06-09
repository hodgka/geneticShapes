#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Point.h"
#include "Polygon.h"
#include "Image.h"




int main(int argc, char const *argv[]){
	std::ifstream in_str(argv[1])
	
	if(!in_str.good()){
		std::cerr<<"Could not open "<<argv[1]<<" to read.\n";
	}
	
	NUMBER_OF_SHAPES = argv[2];
	NUMBER_OF_VERTICES = argv[3];

	if argc>4:
		TRANSPARENCY = argv[4];

	
	
	
	return 0;
}