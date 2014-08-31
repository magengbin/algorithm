test:test.o quick_sort.o insertion_sort.o
	g++ test.o quick_sort.o insertion_sort.o -otest
test.o:test.cpp quick_sort.h
	g++ -c test.cpp
quick_sort.o:quick_sort.cpp insertion_sort.h
	g++ -c quick_sort.cpp
insertion_sort.o:insertion_sort.h
	g++ -c insertion_sort.cpp
clean:
	rm -r test.o quick_sort.o insertion_sort.o
