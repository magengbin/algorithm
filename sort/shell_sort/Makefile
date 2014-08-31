test:test.o shell_sort.o
	g++ test.o shell_sort.o -otest
test.o:test.cpp shell_sort.h
	g++ -c test.cpp
shell_sort.o:shell_sort.cpp
	g++ -c shell_sort.cpp
clean:
	rm -r test.o shell_sort.o
