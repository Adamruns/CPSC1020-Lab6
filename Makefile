COMPILER = g++
OPTIONS = -Wall -std=c++11
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)


$(PROGRAM): Date.cpp main.cpp
	$(COMPILER) $(OPTIONS) Date.cpp main.cpp -o $(PROGRAM)

clean:
	rm *.out