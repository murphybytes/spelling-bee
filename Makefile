

INCLUDES = -I $(BOOST_INCLUDES)
LIBPATH = -L $(BOOST_LIBS)

all: main.o matcher.o
	${CXX} -o spelling-bee main.o matcher.o ${INCLUDES} ${LIBPATH} -lboost_program_options

main.o: main.cpp
	${CXX} -c main.cpp 

matcher.o: matcher.cpp matcher.hpp
	${CXX} -c matcher.cpp 
