#include <string>

class Dog {
	private: 
		std::string breed;
		int id;
	public:
		Dog();
		Dog(std::string breed, int id);
		std::string getBreed();
		int getID();
};

class DogShelter {
	private:
		int num_of_dogs;
		int index;
		Dog dogs[10];
	public:
		DogShelter();
		DogShelter(int num_of_dogs);
		bool addDog(Dog * d);
		bool adopt(int id);
};