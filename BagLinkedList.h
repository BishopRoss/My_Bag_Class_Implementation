#pragma once

struct Node
{
	char info;
	Node* next;//link to the next node;
};

class BagLinkedList
{
public:
	BagLinkedList();
	~BagLinkedList();
	bool isEmpty();
	void print();
	void clear();
	void add(char);
	void remove(char);
	int count(char);
	int getSize();
	
	
	
private:
	Node* first; //header node
};

