#include <iostream>
#include "hash.h"
#include <list>

hashTable::hashTable(int numkeys)
{
	this->numkeys = numkeys;
	hashT = new list<int>[numkeys];

}

void hashTable::insert(int data)
{
	int datakey = hashKey(data);
	hashT[datakey].push_back(data);
}

void hashTable::deleteData(int data)
{
	// get the hash index of key 
	int index = hashKey(data);

	// find the key in the (index) list 
	list <int> ::iterator i;
	for (i = hashT[index].begin();
		i != hashT[index].end(); i++) {
		if (*i == data)
			break;
	}


	if (i != hashT[index].end())
	{
		cout << "Deleting " << data << endl;
		hashT[index].erase(i);
	}
	else
	{
		cout << data << " not found - no delte happened" << endl;
	}
}

int hashTable::hashKey(int data)
{
	return (data % 2);
	//return data % this->numkeys;
}

void hashTable::displayHashTable()
{
	for (int i = 0; i < numkeys; i++)
	{
		cout << " i = " << i << endl;
		for (auto x: hashT[i])
		{
			cout << "--> << " << x;
		}
		cout << endl;
	}
}

bool hashTable::findValue(int data)
{
	
	// get the hash index of key 
	int index = hashKey(data);

	// find the key in (index)th list 
	list <int> ::iterator i;
	for (i = hashT[index].begin();
		i != hashT[index].end(); i++) {
		if (*i == data)
			break;
	}


	if (i != hashT[index].end())
	{
		cout << data << " was found!" << endl;
		return true;
	}
	else
	{
		cout << data << " was not found!" << endl;
		return false;
	}
		
	
}

