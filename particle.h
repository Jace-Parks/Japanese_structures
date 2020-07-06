#pragma once
#include <iostream>
#include <string>

using namespace std;

class particle
{

	string thisparticle;
	string* particles;
	int size

public:

	particle();
	void setparticle(string pa);
	string getparticle();
	~particle();
};

