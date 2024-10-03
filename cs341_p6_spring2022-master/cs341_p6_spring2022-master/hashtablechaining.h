#ifndef HASHTABLECHAINING_H
#define HASHTABLECHAINING_H

#include "hashtable.h"
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

class HashTableChaining: public HashTable{
	private:
		int n;
		list<int> * table;
	public:
		HashTableChaining();
		~HashTableChaining();
		
		HashTableChaining(int num);
	
		virtual int insert(int value);      // Returns 1 if value inserted correctly and 0 if it failed to insert. If value was already in the table, return 1.
        virtual int search(int value);      // Returns 1 if value was in the table, 0 otherwise.
        virtual int remove(int value);      // Returns 1 if value was deleted correctly and 0 if it failed to delete. If value was not in the table to begin, return 1.
        virtual int load(string file);      // Returns 1 if the input file was loaded and all entries were inserted correctly, 0 otherwise.
                                                // You may assume that input files do not include any inserts that would return 0.
        virtual void print(); 
		
		
		
}; //End class HashTableChaining

#endif