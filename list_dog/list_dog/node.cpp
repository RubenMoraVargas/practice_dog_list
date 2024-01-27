#include "node.h"

Node::Node(Dog* newData)
{
	data = newData;
	next = nullptr;
}

Dog* Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

void Node::setData(Dog* newData)
{
	data = newData;
}

void Node::setNext(Node* newNext)
{
	next = newNext;
}
