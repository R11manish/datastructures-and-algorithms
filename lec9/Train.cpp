#include "Train.h"
#include <iostream>
#include <fstream>

using namespace std;

Train::Train() {
	for(int i=0; i<3; i++) {
		Car * new_car = new Car();
		if(i==0) {
			this->engine = new_car;
			this->caboose = new_car;
		} else {
			this->caboose->next_train = new_car;
			this->caboose = new_car;
		}
	}
}

Train::~Train() {
	for(int i=0; i<3; i++) {
		Car * trav = this->engine;
		while(trav->next_train==this->caboose)
			caboose = trav->next_train;
			delete trav->next_train;
			caboose->next_train = NULL;
	}
	delete this->engine;
}

Car* Train::get_caboose() {
	return this->caboose;
}
