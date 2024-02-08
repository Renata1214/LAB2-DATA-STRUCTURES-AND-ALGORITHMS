#pragma once
#include "payload.h"

struct Node {
    Payload data;
    Node* next;

    Node(const Payload& payload) : data(payload), next(nullptr) {}
};

struct List {
    Node* head;
    List() : head(nullptr) {}

    void insert(const Payload& payload);
    void push_front(const std::string& name);
    void pop_front();
    int size() const;
    void print() const; // Declaration of print method
    void display() const;
};
