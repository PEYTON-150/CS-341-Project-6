#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;




int main() {
  	//how many items to hash
  	int numItems = 21;
	//how many items in the table overall
	int tableNum = 300;
	
  	ofstream writer("hashitems.txt"); //create hashitems.txt and load it into our ofstream object
	writer << tableNum << "\n" << numItems << "\n";
  	for (int i = 0; i < numItems; i++)
  	{
  		//sets random height between range and writes that pirate to the file
  		int hashNum = 1 + rand() % 1000;
  		writer << hashNum << "\n";
  	}

  	writer.close();
	return 0;
}