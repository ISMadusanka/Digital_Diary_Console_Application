#pragma once
#include <iostream>

using namespace std;


enum Categories
{
	HEALTH, EDUCATION, FINANCE, LIFESTYLE, FITNESS, OTHER
};

class Date {
public:
	int day=-1;
	int month=-1;
	int year=-1;

	Date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	Date() {

	}

	Date currentDate() {
		// Get the current time
		time_t currentTime;
		time(&currentTime);

		// Convert the current time to a struct tm (time information)
		struct tm localTime;
		localtime_s(&localTime, &currentTime);

		// Extract the date, month, and year components
		int day = localTime.tm_mday;
		int month = localTime.tm_mon + 1;  // Month is 0-indexed, so add 1
		int year = localTime.tm_year + 1900;  // Years since 1900

		Date d(day, month, year);
		return d;

	}
};



class CategoryNodeValue {
public:
	
	Date date;
	string topic;
	string short_description;
	string description;
	Categories category;

	CategoryNodeValue(){}
	CategoryNodeValue(Date date, string topic, string short_description, string description, Categories category) {
		this->date = date;
		this->topic = topic;
		this->short_description = short_description;
		this->description = description;
		this->category = category;
	}
};
class CategoryNode {
public:
	CategoryNode* next;
	CategoryNode* prev;
	CategoryNodeValue val;

	CategoryNode(CategoryNodeValue v) {
		next = NULL;
		prev = NULL;
		val = v;
	}
	
};

class CategoryLinkedList {
private:
	CategoryNode* head;
	CategoryNode* tail;
	int size;

public:

	CategoryLinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void insertLast(CategoryNodeValue val){
		CategoryNode* tmp = new CategoryNode(val);

		if (head == NULL) {
			head = tmp;
			tail = tmp;
		}
		else {
			tail->next = tmp;
			tmp->prev = tail;
			tail = tmp;
		}

		size++;
	}

	void printList() {
		CategoryNode* current = head;
		for (int i = 0; i < size; i++) {
			cout << current->val.topic << endl<<endl;
			cout << current->val.short_description << endl << endl;

			current = current->next;
		}
	}

	int getSize() {
		return size;
	}
};


class Logs {
public:


	Date key;

	CategoryLinkedList health;
	CategoryLinkedList education;
	CategoryLinkedList finance;
	CategoryLinkedList lifestyle;
	CategoryLinkedList fitness;
	CategoryLinkedList other;

	void addLog(CategoryNodeValue log) {
		if (log.category == HEALTH)
		{

			health.insertLast(log);

		}
		else
		if (log.category == EDUCATION)
		{
				education.insertLast(log);
		}else
			if (log.category == FINANCE) {
				finance.insertLast(log);
		}
			else
				if (log.category == LIFESTYLE) {
					lifestyle.insertLast(log);
				}

				else
					if (log.category == FITNESS) {
						fitness.insertLast(log);
					}
					else
						if (log.category == OTHER) {
							other.insertLast(log);
						}
	}



};