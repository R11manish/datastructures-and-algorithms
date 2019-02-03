all: main.o
	g++ -Wall -g -std=c++14 main.o -o main
main.o:
	g++ -c -std=c++14 main.cpp -o main.o
clean: main
	rm -rf *.o
	rm main
run:
	./main