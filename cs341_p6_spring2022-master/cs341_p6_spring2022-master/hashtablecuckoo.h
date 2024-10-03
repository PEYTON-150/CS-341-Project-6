#ifndef HASHTABLECUCKOO_H
#define HASHTABLECUCKOO_H_H

#include "hashtablelinearprobing.h"
#include <iostream>
#include <fstream>

class HashTableCuckoo: public HashTableLinearProbing{
	private:
		int n;
		int* table1;
		int* table2;
		int table[42];
	public:
		HashTableCuckoo();
		~HashTableCuckoo();
		
		HashTableCuckoo(int num);
	
		virtual int insert(int value);      // Returns 1 if value inserted correctly and 0 if it failed to insert. If value was already in the table, return 1.
        virtual int search(int value);      // Returns 1 if value was in the table, 0 otherwise.
        virtual int remove(int value);      // Returns 1 if value was deleted correctly and 0 if it failed to delete. If value was not in the table to begin, return 1.
        virtual int load(string file);      // Returns 1 if the input file was loaded and all entries were inserted correctly, 0 otherwise.
                                                // You may assume that input files do not include any inserts that would return 0.
        virtual void print(); 
		
}; //End class HashTableLinearProbing

#endif