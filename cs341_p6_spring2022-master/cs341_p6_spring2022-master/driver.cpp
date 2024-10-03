#include <iostream>
#include <iomanip>

#include "hashtablechaining.h"
#include "hashtablecuckoo.h"

using namespace std;	// Toodles, Ryan.

void menu1(); 
void menu2();
void menu3();

int main() {
	int choice1 = 0;
	cout<<"Welcome to burger kirg"<<endl;
	cout<<"make a selection ya dingus \n"<<endl;
	cout<< "1) linear probing"<<endl;
	cout<< "2) Separate chaining"<<endl;
	cout<< "3) Cuckoo hashing"<<endl;
	cout<< "0) Quit"<<endl;
	cout<<"~~~~~~"<<endl;
	cin>>choice1;
	if(choice1 == 1)
	{
		menu1();
	}
	if(choice1 == 2)
	{
		menu2();
	}
	if(choice1 == 3)
	{
		menu1();
	}
	return 0;
}

void menu1(){
	int choice2 = 1;
	HashTableLinearProbing hash1;
	while(choice2!=0)
	{
		cout<<"ok what do you want to do."<<endl;
		cout<<"1) Load table from file"<<endl;
		cout<<"2) insert"<<endl;
		cout<<"3) search"<<endl;
		cout<<"4) delete"<<endl;
		cout<<"5) print hash table"<<endl;
		cout<<"0) Quit"<<endl;
		cout<<"~~~~~~"<<endl;
		cin>>choice2;
		if(choice2 == 1)
		{
			string file;
			cout<<"File to load with extension: ";
			cin>>file;
			hash1.load(file);
		}
		if(choice2 == 2)
		{
			int val;
			cout<<"Insert value: ";
			cin>>val;
			hash1.insert(val);
		}
		if(choice2 == 3)
		{
			int val;
			cout<<"Search value: ";
			cin>>val;
			hash1.search(val);
		}
		if(choice2 == 4)
		{
			int val;
			cout<<"Delete value: ";
			cin>>val;
			hash1.remove(val);
		}
		if(choice2 == 5)
		{
			cout<<"Printing hash table."<<endl;
			hash1.print();
		}	
	}
}

void menu2(){
	int choice2 = 1;
	HashTableChaining hash1;
	while(choice2!=0)
	{
		cout<<"ok what do you want to do."<<endl;
		cout<<"1) Load table from file"<<endl;
		cout<<"2) insert"<<endl;
		cout<<"3) search"<<endl;
		cout<<"4) delete"<<endl;
		cout<<"5) print hash table"<<endl;
		cout<<"0) Quit"<<endl;
		cout<<"~~~~~~"<<endl;
		cin>>choice2;
		if(choice2 == 1)
		{
			string file;
			cout<<"File to load with extension: ";
			cin>>file;
			hash1.load(file);
		}
		if(choice2 == 2)
		{
			int val;
			cout<<"Insert value: ";
			cin>>val;
			hash1.insert(val);
		}
		if(choice2 == 3)
		{
			int val;
			cout<<"Search value: ";
			cin>>val;
			hash1.search(val);
		}
		if(choice2 == 4)
		{
			int val;
			cout<<"Delete value: ";
			cin>>val;
			hash1.remove(val);
		}
		if(choice2 == 5)
		{
			cout<<"Printing hash table."<<endl;
			hash1.print();
		}	
	}
}

void menu3(){
	int choice2 = 1;
	HashTableCuckoo hash1;
	while(choice2!=0)
	{
		cout<<"ok what do you want to do."<<endl;
		cout<<"1) Load table from file"<<endl;
		cout<<"2) insert"<<endl;
		cout<<"3) search"<<endl;
		cout<<"4) delete"<<endl;
		cout<<"5) print hash table"<<endl;
		cout<<"0) Quit"<<endl;
		cout<<"~~~~~~"<<endl;
		cin>>choice2;
		if(choice2 == 1)
		{
			string file;
			cout<<"File to load with extension: ";
			cin>>file;
			hash1.load(file);
		}
		if(choice2 == 2)
		{
			int val;
			cout<<"Insert value: ";
			cin>>val;
			hash1.insert(val);
		}
		if(choice2 == 3)
		{
			int val;
			cout<<"Search value: ";
			cin>>val;
			hash1.search(val);
		}
		if(choice2 == 4)
		{
			int val;
			cout<<"Delete value: ";
			cin>>val;
			hash1.remove(val);
		}
		if(choice2 == 5)
		{
			cout<<"Printing hash table."<<endl;
			hash1.print();
		}	
	}
}