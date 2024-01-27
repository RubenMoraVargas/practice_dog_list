#include "linked_list.h"

LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	Node* current = head;
	if (head == nullptr)
	{
		return;
	}

	while (current != nullptr)
	{
		head = head->getNext();
		delete[] current;
		current = head;
	}
}

void LinkedList::insertAtTheBeginning(Dog* newDog)
{
	Node* newNode = new Node(newDog);

	if (head != nullptr)
	{
		newNode->setNext(head);
		head = newNode;
	}
	else
	{
		head = newNode;
	}
}
