#pragma once
#include <string>
#include <iostream>

using namespace std;

class noun
{
	string currentnoun;
	string* nouns;
	int size;

public:
	noun();
	void setnoun();
	void setnoun(string newnoun);
	string getnoun();
	~noun();
};

