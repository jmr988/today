#include "Pair.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	Pair<int> numPair;
	Pair<string> stringPair;

	numPair.setItems(2, 4);

	stringPair.setItems("Hello", "pair");

	cout << numPair.getItem1() << " and " << numPair.getItem2() << " are the pair of numbers" << endl;
	cout << numPair.getMin() << " is the smaller of the two numbers" << endl;
	cout << numPair.getMax() << " is the bigger of the two numbers" << endl;
	cout << stringPair.getItem1()<< " and " << stringPair.getItem2() << " are strings" << endl;
	
	system("pause");
	return 0;

	
}
