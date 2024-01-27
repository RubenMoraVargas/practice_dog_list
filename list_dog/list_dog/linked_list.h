#pragma once
#include "node.h"

class LinkedList
{
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();
    void insertAtTheBeginning(Dog* newDog);
    void insertAtTheEnd(Dog* newDog);
    void insertSortedByAge(Dog* newDog);
    void deleteAtStartup();
    void deleteAtTheEnd();
    void deleteAnIndex(Dog* newDog);
    void deleteByPosition(Node* actualPosition, Node* previusPosition);
    bool searchForADogByName(Dog* newDog);
    void findAllDogsUnderACertainAge(int maxAge);
    void sortTheListByAgeAndDisplayIt();
    void showDog();
};
