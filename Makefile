output: Library.o Librarian.o Member.o Book.o
	g++ Library.o Librarian.o Member.o Book.o -o output

Library.o: Library.cpp
	g++ -c Library.cpp

Librarian.o: Librarian.cpp Librarian.h
	g++ -c Librarian.cpp

Member.o: Member.cpp Member.h
	g++ -c Member.cpp

Book.o: Book.cpp Book.h
	g++ -c Book.cpp



clean:
	rm *.o