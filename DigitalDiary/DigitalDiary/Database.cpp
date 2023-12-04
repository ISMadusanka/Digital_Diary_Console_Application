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
		hashArray = new Logs[36000];
	}

	int HASH_FUNCTION(Date key, int size=36000) {
		
		return (key.day + key.month + key.year)%size;
	}

	void insert(Logs log) {
		Date key = log.key;

		int index = HASH_FUNCTION(key, SIZE);
;		while (hashArray[index].key.year != -1)
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

class Node {
public:
	Node* next;
	int val;

	Node() {
		next = NULL;
		val = -1;
	}

	Node(int val) {
		this->val = val;
	}
};

class Stack {
private:
	Node* head;
	int size;

public:

	Stack() {
		head = NULL;
		size = 0;
	}

	void push(int val) {
		Node* tmp = new Node(val);

		if (head == NULL) {
			//list is empty
			head = tmp;
		}
		else {
			tmp->next = head;
			head = tmp;
		}
		size++;
	}

	int pop() {
		if (head == NULL) {
			return -1;
		}
		else {
			Node* tmp = head;

			if (size == 1) {
				Node node = *tmp;
				head = NULL;
				delete tmp;

				size--;

				return node.val;
			}
			else {
				head = head->next;
				tmp->next = NULL;

				Node node = *tmp;

				delete tmp;

				size--;

				return node.val;
			}


		}
	}
};