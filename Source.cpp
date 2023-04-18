
/*******************************
*  Week 2 lesson:              *
*   a simple LinkedList class  *
*******************************/

#include <iostream>
#include "BagLinkedList.h"

using namespace std;

int main()
{
	BagLinkedList myList;
	char item;
	cout << "-----------------------------------------" << endl;
	cout << "This is a Bag Class with a linked list." << endl;
	cout << "This Bag will not save any entered duplicated values." << endl;
	cout << "-----------------------------------------" << endl;

	cout << "1 - Display the list elements" << endl;
	cout << "2 - Is it empty?" << endl;
	cout << "3 - Add element" << endl;
	cout << "4 - Delete element" << endl;
	cout << "5 - Exit" << endl;
	cout << "6 - Clear bag" << endl;
	cout << "7 - Display size of bag" << endl;
	

	int option;

	//Loop to test the LinkedList class methods
	do
	{
		cout << endl << "Enter your choice: ";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "List elements: ";
			myList.print();
			break;

		case 2:
			if (myList.isEmpty()) cout << "List is empty" << endl;
			else cout << "List is not empty" << endl;
			break;

		case 3:
			cout << "Enter an element to add at the beginning of the list: ";
			cin >> item;
			myList.add(item);
			break;

		case 4:
			cout << "Enter an element to delete from the list: ";
			cin >> item;
			myList.remove(item);
			break;

		case 5:
			cout << "All done!" << endl;
			break;

		case 6:
			myList.clear();
			cout << "Bag has been cleared";
			break;

		case 7:
			cout << "Total amount of items in bag: " << myList.getSize();
			break;

		default: cout << "Invalid choice!" << endl;
		}

	} while (option != 5);

	return 0;
}