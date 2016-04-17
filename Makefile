CC = g++

CFLAGS = -c -Wall


all: LearnCPP

LearnCPP: main.o MyClass.o Person.o Birthday.o
	$(CC) main.o MyClass.o Person.o Birthday.o -o LearnCPP

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp	

MyClass.o: MyClass.cpp
	$(CC) $(CFLAGS) MyClass.cpp

Person.o: Person.cpp
	$(CC) $(CFLAGS) Person.cpp

Birthday.o: Birthday.cpp
	$(CC) $(CFLAGS) Birthday.cpp

#all:
#	g++ main.cpp MyClass.cpp Person.cpp Birthday.cpp -o LearnCPP

clean:
	rm -rf *o LearnCPP 

