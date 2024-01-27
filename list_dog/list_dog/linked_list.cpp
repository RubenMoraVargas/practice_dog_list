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

void LinkedList::insertSortedByAge(Dog* newDog)
{
	Node* newNode = new Node(newDog);
	Node* current = head;
	Node* previous = nullptr;

	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	if (newNode->getData()->getAge() <= current->getData()->getAge())
	{
		newNode->setNext(head);
		head = newNode;
		return;
	}

	while (current != nullptr && newNode->getData()->getAge() >= current->getData()->getAge())
	{
		previous = current;
		current = current->getNext();
	}

	previous->setNext(newNode);
	newNode->setNext(current);
}

void LinkedList::deleteAtStartup()
{
	if (head == nullptr)
	{
		cout << "No hay nada es la lista";
		return;
	}

	head = head->getNext();
}
void LinkedList::deleteAtTheEnd()
{
	Node* actualPosition = head;
	Node* previousPosition = nullptr;

	if (head = nullptr)
	{
		cout << "La lista esta vacia ";
		return;
	}

	while (actualPosition->getNext() != nullptr)
	{
		previousPosition = actualPosition;
		actualPosition = actualPosition->getNext();
	}

	previousPosition->setNext(nullptr);
	delete[] actualPosition;
}
