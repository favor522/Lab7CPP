#pragma once
#include <iostream>
#include <random>
#include <Windows.h>

struct MyNode {
    int data;       
    MyNode* next;     
};
struct LinkedMyNode {
    MyNode* Begin;
    MyNode* End;
};
static int count, Medium, Num = 0;

LinkedMyNode* createList();
LinkedMyNode* generatetheNumber(LinkedMyNode* List, int& Medium);
void printList(LinkedMyNode* List);
void deleteElement(LinkedMyNode* List, int& Medium);