#pragma once
#include <iostream> 
	using namespace std;

	class Dog
	{
	private:
		int age;
		string name;
		bool hasOwner;
		string breed;


	public:
		Dog();
		Dog(int newAge, string newName, bool newHasOwner, string newBreed);

		int getAge();
		string getName();
		bool getHasOwner();
		string getBreed();

		void setAge(int newAge);
		void setName(string newName);
		void setHasOwner(bool newHasOwner);
		void setBreed(string newBreed);

	};



