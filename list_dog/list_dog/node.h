#pragma once
#include "dog.h"
class Node
{
private:
	Dog* data;
	Node* next;

public:

	Node(Dog* newData);

	Dog* getData();
	Node* getNext();

	void setData(Dog* newData);
	void setNext(Node* newNext);

};

