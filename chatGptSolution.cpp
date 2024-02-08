#include "mylistChat.h"
#include <iostream>

void List::insert(const Payload& payload) {
    Node* newNode = new Node(payload);
    if (!head) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void List::push_front(const std::string& name) {
    insert(Payload(name));
}

void List::pop_front() {
        Node* temp = head;
        head = head->next;
        delete temp;
}

int List::size() const {
    int count = 0;
    Node* current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}

void List::print() const {
    Node* current = head;
    while (current) {
        current->data.print();
        std::cout << ' ';
        current = current->next;
    }
}

void List::display() const {
    Node* current = head;
    while (current) {
        current->data.print();
        std::cout << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}
