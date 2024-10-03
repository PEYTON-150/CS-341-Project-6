#include "hashtablechaining.h"

//Default constructor
HashTableChaining::HashTableChaining(){
	n = 21;
	list<int> table ();
}//End default constructor
HashTableChaining::HashTableChaining(int num){
	n = num;
	list<int> table ();
}

//Default destructor
HashTableChaining::~HashTableChaining(){
	
} //End default destructor

int HashTableChaining::insert(int value){
	int loc = (value) % n;
	table[loc].push_back(value);
	return 1;
}
int HashTableChaining::search(int value){
	int loc = (value) % n;
	for (list<int>::iterator x = table[loc].begin(); x != table[loc].end(); x++)
	{
		if(*x == value)
			return 1;
	}
	return 0;
}
int HashTableChaining::remove(int value){
	int loc = (value) % n;
	if(search(value) == 1)
	{
		table[loc].remove(value);
		return 1;
	}
	return 0;
}
int HashTableChaining::load(string file){
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

void HashTableChaining::print(){
	for(int i = 0; i<n; i++)
	{
		cout << "[" << i << "]";
		for (list<int>::iterator x = table[i].begin(); x != table[i].end(); x++)
		{
			cout << *x;
			//if((x)!= table[i].end())
				//cout<< " -> ";
		}
		cout<<endl;
	}
}