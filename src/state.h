#ifndef __state_h_
#define __state_h_


class State{
public:
	//pixel by pixel comparison of images
	//should convert each pixel to binary and calculate difference
	std::string get_State() const {return state_;}
	double compare_Imgs();
	//should randomly change part of the genome(state) and then calculate fitness again
	void mutate();

	double fitness(const std::string& orig);
private:
	std::string state_;

}

#endif