#include "payload.h"
#include <iostream>

using std::string;

struct Node
{
//Members of the structure
    Payload instance;
    Node *next_link;
//Constructor
    Node (string n = "");
};

struct List
{
// Members of list
    Node *Head_List; 
//Constructor
List ();
//Destructor
~List();
//Deleting and adding Nodes to list
void push_front (string name);
void pop_front ();
//Size
int size()const;
//Print
void print () const;
};