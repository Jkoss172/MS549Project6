#include <iostream>
#include "hash.h"
#include <list>

using namespace std;

int main()
{
	int numkeys;
	clock_t start, end;
	cout << "Enter # of indexes " << endl;
	cin >> numkeys;
	start = clock();
	hashTable HT1(numkeys);
	for (int i = 0; i < 10000; i++)
	{
		HT1.insert(rand() % 10000);
	}

	HT1.displayHashTable();

	HT1.findValue(334);

	HT1.deleteData(334);
	HT1.displayHashTable();
	end = clock();
	cout << "execution time (MS): " << end - start << endl;
	return 0;
}