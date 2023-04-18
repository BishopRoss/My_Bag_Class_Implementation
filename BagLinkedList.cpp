#include "BagLinkedList.h"
#include <iostream>
using namespace std;

//linked list constructor
BagLinkedList::BagLinkedList()
{
	first = new Node;
	first->next = NULL;
}

//deconstructor for the linked list
BagLinkedList::~BagLinkedList()
{
	Node* temp;
	
	while (first != NULL)
	{
		temp = first;
		first = first->next;
		delete temp;
	}
}


//checks if the linked list is empty
bool BagLinkedList::isEmpty()
{
	return first->next == NULL;
}


//prints the linked list
void BagLinkedList::print()
{
	Node* current = first->next;

	while (current != NULL)
	{
		cout << current->info << " ";
		current = current->next;
	}
	cout << endl;
}


//clears the linked list
void BagLinkedList::clear()
{
	
	Node* old = first->next;
	while (old != NULL)
	{
		first->next = old->next;
		old->next = NULL;
		cout << "Deleting " << old->info << "\n";
		delete old;
		old = first->next;
	}

	
}




//adds a char value to the linked list
void BagLinkedList::add(char item)
{
	Node* p = new Node;
	if (count(item) == 0)
	{
		p->info = item;
		p->next = first->next;
		first->next = p;
	}
	else 
	{
		return;
	}
	
}


//removes a char value from the linked list
void BagLinkedList::remove(char item)
{
	Node* old = first->next, *p = first;

	bool found = false;

	while (old != NULL && !found)
	{
		if (old->info == item) found = true;
		else {
			p = old;
			old = p->next;
		}
	}
	if (found)
	{
		p->next = old->next;
		delete old;
	}

}

//returns the amount of char elements in the list
int BagLinkedList::getSize()
{
	Node* temp=first->next;
	int counter = 0;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return counter;
}

//counts the amount of occurences in the linked list. 
//only used above in my add function to ensure no more than 1 value can be entered
int BagLinkedList::count(char item)
{
	Node* temp=first->next;
	int counter = 0;

	while (temp != NULL)
	{
		if (temp->info == item)
		{
			counter++;
		}
		temp = temp->next;
	}
	return counter;
}

