# Search and replace the name to utilize this Makefile with other simple programs
# :%s/nameToReplace/newName/g
all: twoKnights
twoKnights: twoKnights.o
	g++ twoKnights.o -std=c++11 -o twoKnights
twoKnights.o: twoKnights.cpp
	g++ -std=c++11 -c twoKnights.cpp
clean:
	rm *.o
	rm twoKnights
