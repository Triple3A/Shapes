CC := g++ -std=c++11

all: 1.out
	
1.out: main.o shape.o sphere.o cuboid.o cone.o
	$(CC) main.o shape.o sphere.o cuboid.o cone.o -o 1.out

main.o: shape.h sphere.h cuboid.h cone.h main.cpp
	$(CC) -c main.cpp -o main.o

shape.o: shape.h shape.cpp
	$(CC) -c shape.cpp -o shape.o
	
sphere.o: sphere.h shape.h sphere.cpp
	$(CC) -c sphere.cpp -o sphere.o
	
cuboid.o: cuboid.h shape.h cuboid.cpp
	$(CC) -c cuboid.cpp -o cuboid.o
	
cone.o: cone.h shape.h cone.cpp
	$(CC) -c cone.cpp -o cone.o
	
.PHONY: clean
clean:
	rm -r *.o

