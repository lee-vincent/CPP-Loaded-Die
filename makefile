prog: main.o Die.o LoadedDie.o
	g++ main.o Die.o LoadedDie.o -o prog

main.o: main.cpp Die.h LoadedDie.h
	g++ -c main.cpp

Die.o: Die.cpp Die.h
	g++ -c Die.cpp

LoadedDie.o: LoadedDie.cpp LoadedDie.h
	g++ -c LoadedDie.cpp

clean:
	\rm *.o prog
