#include "dog.h"

Dog::Dog()
{
	age = 0;
	name = "";
	hasOwner = true;
	breed = "";
}

Dog::Dog(int newAge, string newName, bool newHasOwner, string newBreed)
{
	age = newAge;
	name = newName;
	hasOwner = newHasOwner;
	breed = newBreed;
}

int Dog::getAge()
{
	return age;
}

string Dog::getName()
{
	return name;
}

bool Dog::getHasOwner()
{
	return hasOwner;
}

string Dog::getBreed()
{
	return breed;
}

void Dog::setAge(int newAge)
{
	age = newAge;
}

void Dog::setName(string newName)
{
	name = newName;
}

void Dog::setHasOwner(bool newHasOwner)
{
	hasOwner = newHasOwner;
}

void Dog::setBreed(string newBreed)
{
	breed = newBreed;
}
