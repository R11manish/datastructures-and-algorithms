FLAGS = -Wall -Wextra -DDEBUG -g -std=c++14
PROJNAME = lec7

all: lec7.o DogShelter.o
	g++ $(FLAGS) lec7.o DogShelter.o -o $(PROJNAME)

lec7.o: lec7.cpp
	g++ $(FLAGS) -c lec7.cpp -o lec7.o

DogShelter.o: DogShelter.cpp
	g++ $(FLAGS) -c DogShelter.cpp -o DogShelter.o
run: all
	./$(PROJNAME)
clean:
	rm -rf *.o
	rm -rf $(PROJNAME)
	rm *.log