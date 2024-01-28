#include "linked_list.h"

LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	Node* current = head;
	if (head == nullptr) return; // para simplificar

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

	if (head != nullptr) // Se peude simplificar el codigo invirtiendo el if y borrando el else
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
	else // Cambiar por un return
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

void LinkedList::deleteAtStartup() //deleteAtStart
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

void LinkedList::deleteAnIndex(Dog* newDog)
{
	Node* newNode = new Node(newDog);
	Node* actualPosition = head;
	Node* previusPosition = nullptr;

	if (head == nullptr)
	{
		return;
	}

	while (actualPosition->getNext() != nullptr && actualPosition->getData() != newDog)
	{
		previusPosition = actualPosition;
		actualPosition = actualPosition->getNext();
	}

	deleteByPosition(actualPosition, previusPosition);

}

void LinkedList::deleteByPosition(Node* actualPosition, Node* previusPosition)
{ // ver si es privado
	if (previusPosition == nullptr)
	{
		deleteAtStartup();
		return;
	}

	if (actualPosition->getNext() == nullptr)
	{
		deleteAtTheEnd();
		return;
	}

	previusPosition->setNext(actualPosition->getNext());
}

bool LinkedList::searchForADogByName(Dog* newDog)
{
	Node* newNode = new Node(newDog);
	Node* current = head;

	if (head == nullptr)
	{
		return false;
	}

	while (current != nullptr)
	{
		if (current->getData()->getName() == newDog->getName())
		{
			return true;
		}
		current = current->getNext();
	}
	return false;
}

void LinkedList::findAllDogsUnderACertainAge(int maxAge)
{
	Node* current = head;

	while (current != nullptr)
	{
		if (current->getData()->getAge() < maxAge)
		{
			cout << "La edad es: " << current->getData()->getAge() << " | ";
			cout << "La raza es: " << current->getData()->getBreed() << " | ";
			if (current->getData()->getHasOwner() == true)
			{
				cout << "Si tiene dueno: " << current->getData()->getHasOwner() << " | ";
			}
			else
			{
				cout << "No tiene dueno: " << current->getData()->getHasOwner() << " | ";
			}

			cout << "El nombre es: " << current->getData()->getName() << " | ";
			cout << endl << endl;

		}
		current = current->getNext();
	}

}

void LinkedList::sortTheListByAgeAndDisplayIt()
{
	Node* current;
	bool swap;
	int auxiliary = 0;

	if (head == nullptr)
	{
		return;
	}

	do
	{
		current = head;
		swap = false;

		while (current != nullptr && current->getNext() != nullptr)
		{
			if (current->getData()->getAge() > current->getNext()->getData()->getAge())
			{
				auxiliary = current->getData()->getAge();
				current->getData()->setAge(current->getNext()->getData()->getAge());
				current->getNext()->getData()->setAge(auxiliary);
				swap = true;
			}
			current = current->getNext();
		}

	} while (swap);
}

void LinkedList::showDog()
{
	if (head == nullptr)
	{
		cout << "La lista esta vacia " << endl;
		return;
	}


	Node* current = head;

	while (current != nullptr)
	{
		cout << "El nombre es: " << current->getData()->getName() << " | ";
		cout << "La edad es: " << current->getData()->getAge() << " | ";
		cout << "La raza es: " << current->getData()->getBreed() << " | ";

		if (current->getData()->getHasOwner() == true)
		{
			cout << "Si tiene dueno: " << current->getData()->getHasOwner() << " | ";
		}
		else
		{
			cout << "No tiene dueno: " << current->getData()->getHasOwner() << " | ";
		}


		cout << endl << endl;
		current = current->getNext();
	}
}
