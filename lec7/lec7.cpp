#include "Dog.h"

int main() {
	Dog *dog1 = new Dog("Golder Retriever", 1);
	Dog *dog2 = new Dog("German Sheperd", 2);
	Dog *dog3 = new Dog("Terrier", 3);
	DogShelter *shelter = new DogShelter(5);
	shelter->addDog(dog1);
	shelter->addDog(dog2);
	shelter->addDog(dog3);
	shelter->adopt(2);
	shelter->adopt(3);
	return 0;
}