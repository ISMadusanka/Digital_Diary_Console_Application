#pragma once
#include <iostream>
#include "DataModels.cpp"

using namespace std;

class HashMap {

public:
	const int SIZE = 36000;

	// WARNINGS can generate errors
	Logs* hashArray;

public:

	HashMap() {
		hashArray = new Logs[3600];
	}

	int HASH_FUNCTION(Date key, int size) {
		return (key.day + key.month + key.year)%size;
	}

	void insert(Logs log) {
		Date key = log.key;
		int index = HASH_FUNCTION(key, SIZE);

		while (hashArray[index].key.year != -1)
		{
			index = (index + 1) % SIZE;
		}

		hashArray[index] = log;
		

	}

	Logs search(Date key) {
		int index = HASH_FUNCTION(key,SIZE);

		while (hashArray[index].key.year != -1) {
			if (hashArray[index].key.day == key.day && hashArray[index].key.month == key.month && hashArray[index].key.year == key.year) {
				return hashArray[index];
			}
			else {
				index = (index + 1) % SIZE;
			}
		}

		return Logs();
	}


};

