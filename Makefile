Main: main.o MyTime.o
	g++ -o run main.o MyTime.o
main.o: main.cpp MyTime.h
	g++ -c main.cpp

Rectangle.o: MyTime.cpp
	g++ -c MyTime.cpp

clean:
	rm -rf *.o main
