#pragma once
#include <iostream>
#include <string>

using namespace std;

class verb
{
	string currentverb;
	string** verbs;
	int size; 

public:

	verb();
	void setverb();  //sets random verb
	void setverb(int type); //gets a random verb of a certain type
	void setverb(int index, int type); //sets a specific verb and a specific type
	void setverb(string v);  //takes in a verb and sets it
	string getverb();       //returns the set verb
	string getrandomverb();  //returns NEW random verb
	~verb();

};

