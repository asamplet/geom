.PHONY:all clean
CC=gcc
CFLAGS=-Wall -Werror
SD=~/geom/src/
OD=~/geom/build/
EXECUTABLE=~/geom/bin/geom.exe
all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)geom.o $(OD)pip.o 
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)pip.o $(OD)geom.o -lm
$(OD)pip.o: $(SD)pip.cpp
	$(CC) $(CFLAGS) -c -o $(OD)pip.o $(SD)pip.cpp -lm
$(OD)geom.o: $(SD)geom.cpp
	$(CC) $(CFLAGS) -c -o $(OD)geom.o $(SD)geom.cpp -lm
clean:
	rm -rf $(EXECUTABLE) $(OD)*.o
