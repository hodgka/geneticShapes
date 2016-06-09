

Polygon::Polygon(std::vector<Point*> vertices,int r,int g,int b){
	vertices_ = vertices;
	r_ = r;
	g_ = g;
	b_ = b;
	size_ = vertices.size();
	centroid_ = calculate_Centroid();
}

Polygon::change_Color(std::string& hex_Value){
	std::string s1= hex_Value.substr(0,2);
	std::string s2 =hex_Value.substr(2,2);
	std::string s3 =hex_Value.substr(4,2);
	change_Color(std::stol(s1,10),std::stol(s2,10),std::stol(s3,10));
}

Polygon::calculate_Centroid(){
	int denom = get_Size();
	int totalx = 0;
	int totaly = ;
	vector<Point*> pvec = get_Vertices();
	for (int i = 0; i < denom; ++i){
		totalx+=pvec[i]->get_X();
		totaly+=pver[i]->get_Y();
	}
	centroid_ = new Point(totalx/denom,totaly/denom,0);

}