#include "hashtablecuckoo.h"

//Default constructor
HashTableCuckoo::HashTableCuckoo(){
	n = 42;
	table[42];
	table1 = table;
	table2 = (table+21);
}//End default constructor
HashTableCuckoo::HashTableCuckoo(int num){
	n = num * 2;
	table[n];
	table1 = table;
	table2 = (table+num);
}

//Default destructor
HashTableCuckoo::~HashTableCuckoo(){
	
} //End default destructor

int HashTableCuckoo::insert(int value){
	int loc = value % (n/2);
	int temp = 0;
	for(int i = 0; i<5; i++)
	{
		if(table[loc] == value)
		{
			return 1;
		}
		if(table[loc] != 0)
		{
			temp = table[loc];
			table[loc] = value;
			value = temp;
		}
		else
		{
			table[loc] = value;
			return 1;
		}
		loc = (value / (n/2)) % (n/2);
		if(table2[loc] == value)
		{
			return 1;
		}
		if(table2[loc] !=0)
		{
			temp = table2[loc];
			table2[loc] = value;
			value = temp;
		}
		else
		{
			table2[loc] = value;
			return 1;
		}
		int loc = value % (n/2);
	}
	return 0;
}
int HashTableCuckoo::search(int value){
	int loc = value % (n/2);
	if(table[loc] == value)
	{
		return 1;
	}
	loc = (value / (n/2)) % (n/2);
	if(table[loc] == value)
	{
		return 1;
	}
	return 0;
}
int HashTableCuckoo::remove(int value){
	int loc = value % (n/2);
	if(table[loc] == value)
	{
		table[loc] = 0;
		return 1;
	}
	loc = (value / (n/2)) % (n/2);
	if(table[loc] == value)
	{
		table2[loc] = 0;
		return 1;
	}
	return 0;
}
int HashTableCuckoo::load(string file){
	ifstream infile;
	int x = 0;
	int k = 0;
	infile.open(file);
	if(!infile)
		return 0;
	infile >> n;
	infile >> k;
	for(int i=0;i<k;i++)
	{
		infile >> x;
		insert(x);
	}
	return 1;
}

void HashTableCuckoo::print(){
	for(int i = 0; i<n; i++)
	{
		cout << "[" << i << "]"<< table[i] << "    [ "<< i << "]" << table2[i]<<endl;
	}
}