output: Library.o Librarian.o Member.o
	g++ Library.o Librarian.o Member.o -o output

Library.o: Library.cpp
	g++ -c Library.cpp

Librarian.o: Librarian.cpp Librarian.h
	g++ -c Librarian.cpp

Member.o: Member.cpp Member.h
	g++ -c Member.cpp





clean:
	rm *.o