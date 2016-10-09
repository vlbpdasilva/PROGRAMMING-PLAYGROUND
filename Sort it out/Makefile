sort: main.o Sort.o
	g++ -std=c++11 -g main.o Sort.o -o sort
	
main.o: main.cpp Sort.h Sort.cpp
	g++ -std=c++11 -g -c main.cpp
	
Sort.o: Sort.cpp
	g++ -std=c++11 -c Sort.cpp

clean: rm *.o sort
	clean done
