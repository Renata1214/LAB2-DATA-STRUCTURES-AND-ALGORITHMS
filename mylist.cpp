#include "payload.h"
#include "mylist.h"
#include <iostream>

using std::string;

//Node initializer

Node:: Node (string n){
    instance = n;
    next_link = nullptr;
}

List :: List (){
    Head_List= nullptr;
    newNode = nullptr; 
}

List::~List (){
    delete newNode;
};

//Push front
void List::push_front (string name){
    newNode= new Node (name);
    newNode->next_link= Head_List;
    Head_List = newNode;
    
    }

//Pop front
void List::pop_front (){



}

//size, not as a variable.

//print function


