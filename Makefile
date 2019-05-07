.PHONY:all lean
CC=gcc
CFLAGS=-Wall -Werror
SD=src/
OD=build/src/
ODT=build/test/
EXECUTABLE=bin/geom.exe
EXE=bin/test.exe

all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)geom.o $(OD)pip.o $(OD)per.o $(OD)plo.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)pip.o $(OD)geom.o $(OD)per.o $(OD)plo.o -lm
$(OD)per.o: $(SD)per.cpp
	$(CC) $(CFLAGS) -c -o $(OD)per.o $(SD)per.cpp -lm
$(OD)plo.o: $(SD)plo.cpp
	$(CC) $(CFLAGS) -c -o $(OD)plo.o $(SD)plo.cpp -lm
$(OD)pip.o: $(SD)pip.cpp
	$(CC) $(CFLAGS) -c -o $(OD)pip.o $(SD)pip.cpp -lm
$(OD)geom.o: $(SD)geom.cpp
	$(CC) $(CFLAGS) -c -o $(OD)geom.o $(SD)geom.cpp -lm


test: $(EXE)

$(EXE): $(ODT)main.o $(ODT)pip.o $(ODT)per.o $(ODT)plo.o 
	$(CC) $(CFLAGS) -o $(EXE) $(ODT)main.o $(ODT)pip.o $(ODT)per.o $(ODT)plo.o -lm

$(ODT)main.o: test/main.c
	$(CC) $(CFLAGS) -c -I thirdparty -I src test/main.c -o $(ODT)main.o

$(ODT)pip.o: src/pip.cpp src/foo.h
	$(CC) $(CFLAGS) -c -I thirdparty -I src $(SD)pip.cpp -o $(ODT)pip.o

$(ODT)plo.o: src/plo.cpp src/foo.h
	$(CC) $(CFLAGS) -c -I thirdparty -I src $(SD)plo.cpp -o $(ODT)plo.o

$(ODT)per.o: src/per.cpp src/foo.h
	$(CC) $(CFLAGS) -c -I thirdparty -I src $(SD)per.cpp -o $(ODT)per.o

clean:
	rm -rf $(EXECUTABLE) $(OD)*.o
