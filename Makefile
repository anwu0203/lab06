# Makefile
# Andy Wu, Chase Alcorn
all: examheap

examheap: examheap.o heap.o
	g++ examheap.o heap.o -o examheap
  
examheap.o: examheap.cpp
	g++ -c -Werror examheap.cpp

heap.o: heap.cpp heap.h
	g++ -c -Werror heap.cpp

clean:
	rm *.o examheap