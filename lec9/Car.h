#include <string>

class Car {
	private:
		int weight;
	public:
		Car() {
			this->weight = rand()%1000;
			this->next_train = NULL;
		}
		Car * next_train;
		int get_weight();
};