Main: main.o Rectangle.o
	g++ -o run main.o Rectangle.o
main.o: main.cpp Rectangle.h
	g++ -c main.cpp

Rectangle.o: Rectangle.cpp
	g++ -c Rectangle.cpp

clean:
	rm -rf *.o main
