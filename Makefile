all: stud

stud: main.o student.o
	g++ main.o student.o -o stud

main.o: main.cpp
	g++ -c main.cpp

student.o: student.cpp
	g++ -c student.cpp

clean:
	rm -rf *.o stud