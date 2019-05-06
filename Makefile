.PHONY:all clean
CC=gcc
CFLAGS=-Wall -Werror
SD=src/
OD=build/src/
EXECUTABLE=bin/geom.exe
all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)geom.o $(OD)pip.o 
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)pip.o $(OD)geom.o -lm
$(OD)pip.o: $(SD)pip.cpp
	$(CC) $(CFLAGS) -c -o $(OD)pip.o $(SD)pip.cpp -lm
$(OD)geom.o: $(SD)geom.cpp
	$(CC) $(CFLAGS) -c -o $(OD)geom.o $(SD)geom.cpp -lm


test: bin/geometry_test

bin/geometry_test: build/test/geom.o build/test/pip.o 
	gcc -Wall -Werror build/test/geom.o build/test/pip.o -o bin/geometry_test -lm

build/test/geom.o: test/main.c
	gcc -Wall -Werror -c -I thirdparty -I src test/main.c -o build/test/main.o

build/test/pip.o: src/pip.cpp src/foo.h
	gcc -Wall -Werror -c -I thirdparty -I src src/pip.cpp -o build/test/pip.o

clean:
	rm -rf $(EXECUTABLE) $(OD)*.o
