bruh2: driver.cpp hashtable.o hashtablelinearprobing.o hashtablechaining.o hashtablecuckoo.o
	g++ -o bruh2 driver.cpp hashtable.o hashtablelinearprobing.o hashtablechaining.o hashtablecuckoo.o

hashtablecuckoo.o: hashtablecuckoo.cpp hashtablecuckoo.h
	g++ -c hashtablecuckoo.cpp hashtablecuckoo.h

hashtablechaining.o: hashtablechaining.cpp hashtablechaining.h
	g++ -c hashtablechaining.cpp hashtablechaining.h

hashtablelinearprobing.o: hashtablelinearprobing.cpp hashtablelinearprobing.h
	g++ -c hashtablelinearprobing.cpp hashtablelinearprobing.h

hashtable.o: hashtable.cpp hashtable.h
	g++ -c hashtable.cpp hashtable.h

valgrind:
	valgrind --tool=memcheck --log-file=valgrindoutput.txt --leak-check=full ./bruh2

clean:
	rm -rf *.o bruh2