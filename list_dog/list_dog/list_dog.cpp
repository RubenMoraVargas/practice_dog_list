#include "linked_list.h"
#include "dog.h"

int main()
{
	LinkedList dogList;

	dogList.insertAtTheEnd(new Dog(3, "Buddy", true, "Golden Retriever"));
	dogList.insertAtTheEnd(new Dog(4, "Summer", true, "Poodle"));
	dogList.insertAtTheEnd(new Dog(2, "Max", false, "Labrador"));
	dogList.insertAtTheEnd(new Dog(5, "Lucy", true, "Poodle"));
	dogList.showDog();
	cout << endl << "-------------------" << endl;


	dogList.sortTheListByAgeAndDisplayIt();

	//dogList.findAllDogsUnderACertainAge(4);

	//dogList.deleteAtStartup(); 

	dogList.showDog();

}

