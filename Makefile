CXX=g++ --std=c++11 -O3

PROG=-o olimar

DEPS=main.o pikmin.o

all: main 

main: $(DEPS)
	$(CXX) $(PROG) $(DEPS)

main.o: main.cpp
	$(CXX) -c main.cpp

pikmin.o: pikmin.cpp
	$(CXX) -c pikmin.cpp

clean:
	rm -rf *.o olimar
