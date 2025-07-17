# Search and replace the name to utilize this Makefile with other simple programs
# :%s/nameToReplace/newName/g
all: numberSpiral.o
	g++ numberSpiral.cpp -std=c++11 -o numberSpiral
numberSpiral.o: numberSpiral.cpp
	g++ -std=c++11 -c numberSpiral.cpp

clean:
	rm *.o
	rm numberSpiral
