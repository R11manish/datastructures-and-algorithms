#include "Dog.h"
#include <iostream>
#include <fstream>

using namespace std;

DogShelter::DogShelter() {
	this->index=this->num_of_dogs=0;
}

DogShelter::DogShelter(int num_of_dogs) {
	this->num_of_dogs = num_of_dogs;
	this->index=0;
}

bool DogShelter::addDog(Dog *d) {
	this->dogs[index] = *d;
	this->index++;
	return true;
}

Dog::Dog() {
	this->breed="";
	this->id=-1;
}

Dog::Dog(std::string breed, int id) {
	this->breed = breed;
	this->id = id;
}

std::string Dog::getBreed() {
	return this->breed;
}

int Dog::getID() {
	return this->id;
}

bool DogShelter::adopt(int id) {
	for(int i=0; i<this->num_of_dogs; i++) {
		if(this->dogs[i].getID()==id) {
			fstream log;
			log.open("adopted.log", fstream::app);
			log<<"ID: "<<this->dogs[i].getID()<<" Breed: "<<this->dogs[i].getBreed()<<endl;
			log.close();
		}
	}
	return false;
}