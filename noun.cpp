#include "noun.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

noun::noun() {
	cout << "How many verbs?: ";
	cin >> size;
	cout << endl;

	nouns = new string[size];

	for (int i = 0;i < size; i++) {
		cout << "enter noun: ";
		cin >> nouns[i];
		cout << endl;
	}
	cout << "finished taking in nouns!" << endl;
}

void noun::setnoun() {
	//pick random noun
	int index = 0;
	srand(time(NULL));

	index = rand() % size;

	currentnoun = nouns[index];
}

void noun::setnoun(string newnoun) {
	size++;
	string* buffer= new string[size];
	buffer[0] = newnoun;
	for (int i = 1; i < size; i++) {
		buffer[i] = nouns[i - 1];
	} 
	delete[] nouns;
	nouns = buffer;
	currentnoun = newnoun;
}

string noun::getnoun() {
	return this->currentnoun;
}

noun::~noun() {

}