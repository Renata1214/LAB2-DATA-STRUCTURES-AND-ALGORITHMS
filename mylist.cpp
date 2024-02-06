#include "payload.h"
#include "mylist.h"
#include <iostream>

using std::string;
using std::cout;

//Node initializer

Node:: Node (string n){
    instance = n;
    next_link = nullptr;
}

List :: List (){
    Head_List= nullptr;
}

List::~List (){
     while (Head_List != nullptr) {
        Node* temp = Head_List;
        Head_List = Head_List->next_link;
        delete temp;
    }
};

//Push front
void List::push_front (string name){
    Node *newNode= new Node (name); //Ask if i need a variable or if i can just declare it inside the function
    newNode->next_link= Head_List;
    Head_List = newNode;
    }

//Pop front
void List::pop_front (){
    
    Node * temp = Head_List->next_link;
    Head_List -> ~Node ();
    Head_List = temp;
}

//size, not as a variable.
int List::size ()const{
    int counter =0;
    Node * temp = Head_List;
    while (temp !=nullptr){
        temp = temp -> next_link;
        counter ++;
    }
    return counter;
}

//print function
void List::print ()const{
    Node * temp = Head_List;
    while (temp !=nullptr){
        cout << "(" << temp -> instance.name  << ") ";
         temp = temp -> next_link;
    }
}

