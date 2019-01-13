

all: main.o matcher.o
	${CXX} -o spelling-bee main.o matcher.o 

main.o: main.cpp
	${CXX} -c main.cpp 

matcher.o: matcher.cpp matcher.hpp
	${CXX} -c matcher.cpp 
