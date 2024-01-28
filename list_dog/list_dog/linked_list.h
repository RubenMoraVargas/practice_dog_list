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
    void deleteAnIndex(Dog* newDog);//deleteByIndex
    void deleteByPosition(Node* actualPosition, Node* previusPosition);//Este no me parecen los parámetros
    bool searchForADogByName(Dog* newDog);// Mejorar el nombre para indicar existDogByName(string)
    void findAllDogsUnderACertainAge(int maxAge); // deberia devolver algo o indicar que imprime
    void sortTheListByAgeAndDisplayIt();
    void showDog();// SI es solo uno ocupa parametro, caso contrario debe ser showList
};
