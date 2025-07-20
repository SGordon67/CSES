# Search and replace the name to utilize this Makefile with other simple programs
# :%s/nameToReplace/newName/g
all: twoSets
twoSets: twoSets.o
	g++ twoSets.o -std=c++11 -o twoSets
twoSets.o: twoSets.cpp
	g++ -std=c++11 -c twoSets.cpp
clean:
	rm *.o
	rm twoSets
