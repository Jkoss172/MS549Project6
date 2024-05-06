#pragma once
#include <list>

using namespace std;

class hashTable
{
	int numkeys;
	list<int>* hashT;

public:
	hashTable(int numkeys);
	void insert(int data);
	int hashKey(int data);
	void displayHashTable();
	bool findValue(int data);
	void deleteData(int data);


};
