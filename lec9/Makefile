FLAGS = -Wall -Wextra -DDEBUG -g -std=c++14
PROJNAME = lec9

all: lec9.o Train.o Car.o
	g++ $(FLAGS) lec9.o Train.o Car.o -o $(PROJNAME)

lec9.o: lec9.cpp
	g++ $(FLAGS) -c lec9.cpp -o lec9.o

Train.o: Train.cpp
	g++ $(FLAGS) -c Train.cpp -o Train.o

Car.o: Car.cpp
	g++ $(FLAGS) -c Car.cpp -o Car.o

run: all
	./$(PROJNAME)
clean:
	rm -rf *.o
	rm -rf $(PROJNAME)
	rm *.log