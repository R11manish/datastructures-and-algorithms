#include <string>
#include "Car.h"

class Train {
	private: 
	public:
		Car * engine;
		Car * caboose;
		Train();
		~Train();
		Car* get_caboose();
};