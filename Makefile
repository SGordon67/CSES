# Search and replace the name to utilize this Makefile with other simple programs
# :%s/nameToReplace/newName/g
all: bitStrings
bitStrings: bitStrings.o
	g++ bitStrings.o -std=c++11 -o bitStrings
bitStrings.o: bitStrings.cpp
	g++ -std=c++11 -c bitStrings.cpp
clean:
	rm *.o
	rm bitStrings
