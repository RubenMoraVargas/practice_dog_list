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

void LinkedList::insertAtTheEnd(Dog* newDog)
{
	Node* newNode = new Node(newDog);
	Node* current = head;

	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		while (current->getNext() != nullptr)
		{
			current = current->getNext();
		}

		current->setNext(newNode);
	}
}
