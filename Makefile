# Search and replace the name to utilize this Makefile with other simple programs
# :%s/nameToReplace/newName/g
all: increasingArray.o
	g++ increasingArray.cpp -std=c++11 -o increasingArray
increasingArray.o: increasingArray.cpp
	g++ -std=c++11 -c increasingArray.cpp

clean:
	rm *.o
	rm increasingArray
