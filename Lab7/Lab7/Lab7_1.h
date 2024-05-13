#pragma once
#include <iostream>
#include <random>

struct MyNode {
    int data;       
    MyNode* next;     
};
struct LinkedMyNode {
    MyNode* Begin;
    MyNode* End;
};
int count, Medium = 0;

LinkedMyNode* createList();
LinkedMyNode* generatetheNumber(LinkedMyNode* List, int& Medium);
void printList();