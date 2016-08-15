CLANG_C = $(shell which gcc)
BIN_NAME = bsh

GCC=$(CLANG_C) -Wall

all: clean run

compile: 
	$(GCC) -c -I. *.c 

link: compile
	$(GCC) *.o -o $(BIN_NAME)

test: link
	./$(BIN_NAME) -v

run: test
	@echo "***********************************"
	@echo "******** BUILD SUCCESSFULL ********"
	@echo "***********************************"

clean:
	@echo "cleaning old build"
	rm -f *.o $(BIN_NAME)
