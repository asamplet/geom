all: out

out: prog.o pip.o
	gcc build/prog.o build/pip.o -Wall -Werror -o -lm bit/geom

prog.o: src/geom.cpp
	gcc src/geom.cpp -o build/prog.o -cpp -Wall -Werror

pip.o: src/pip.cpp
	gcc src/pip.cpp -o build/pip.o -cpp -Wall -Werror - lm

clean:
	rm -rf built/*.o bit/geom

