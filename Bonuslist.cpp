#include "payload.h"
#include "Bonuslist.h"
#include <iostream>

//Ask whether the names are supposed to be given to the node or to the payload objects.

using std::string;
using std::cout;

//Node initializer
Node:: Node (const std::string& n){
    instance = new Payload (n);
    next_link = nullptr;
}

//Node destructor
Node::~Node() {
        delete instance; // Deallocate the Payload object
    }


//Iterator
        Iterator::Iterator(Node* startNode) {current=startNode;}

        Iterator& Iterator::operator++() {
            if (current) {
                current = current->next_link;
            }
            return *this;
        }

        Payload& Iterator::operator*() {
            return current->instance;
        }

        bool Iterator::operator!=(const Iterator& other) const {
            return current != other.current;
        }

//List
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
void List::push_front (const std::string& name){
    Node *newNode= new Node (name); //Ask if i need a variable or if i can just declare it inside the function
    newNode->next_link= Head_List;
    Head_List = newNode;
    }

//Pop front
void List::pop_front (){
    if(Head_List == nullptr){
        cout << "No elements inside the list" << '\n';
    }
    else{
    Node * temp = Head_List->next_link;
    Head_List -> ~Node ();
    Head_List = temp;}
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
        temp -> instance->print();
         temp = temp -> next_link;
    }
}

//iTERATOR FUNCTION DECLARATIONS
Iterator List::begin() {
    return Iterator(Head_List);
}

Iterator List::end() {
    return Iterator(nullptr);
}


