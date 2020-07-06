#include <iostream>
#include "noun.h"
#include "structuralpatterns.h"

using namespace std;

void isthisok(noun n) {
	cout << n.getnoun() << "wadaijyobududesuka" << endl;
}

int main() {
	noun n1;

	n1.setnoun();

	cout << "korewa" << n1.getnoun() << "desu" << endl;

	return 0;
}