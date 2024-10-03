#include "HashTableLinearProbing.h"

//Default constructor
HashTableLinearProbing::HashTableLinearProbing(){
	n = 0;
}//End default constructor

//Default destructor
HashTableLinearProbing::~HashTableLinearProbing(){
	
} //End default destructor

int HashTableLinearProbing::insert(int value){
	for(int i = 0; i<n; i++)
	{
		int loc = (value+i) % n;
		if(table[loc] == 0 || table[loc] == value)
		{
			table[loc] = value;
			return 1;
		}
	}
	return 0;
}
int HashTableLinearProbing::search(int value){
	for(int i = 0; i<n; i++)
	{
		int loc = (value+i) % n;
		if(table[loc] == value)
		{
			return 1;
		}
	}
	return 0;
}
int HashTableLinearProbing::remove(int value){
	for(int i = 0; i<n; i++)
	{
		int loc = (value+i) % n;
		if(table[loc] == value)
		{
			table[loc] = 0;
			return 1;
		}
	}
	return 0;
}
int HashTableLinearProbing::load(string file){
	
}

void HashTableLinearProbing::print(){
	
}