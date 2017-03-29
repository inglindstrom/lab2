elo: eloc.o main.o
	g++ -o elo main.o eloc.o

eloc.o: eloc.cpp eloc.h
	g++ -c eloc.cpp

main.o: main.cpp eloc.h
	g++ -c main.cpp

clean:
	rm elo *.o