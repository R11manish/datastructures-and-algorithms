#include "Train.h"
#include <iostream>

int main() {
	Train *train = new Train();
	std::cout<<train->engine->get_weight()<<std::endl;
	std::cout<<train->engine->get_weight()<<std::endl;
	std::cout<<train->engine->get_weight()<<std::endl;
	return 0;
}