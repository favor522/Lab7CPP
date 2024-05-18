#pragma once
#include <iostream>
#include <Windows.h>

struct PNode {
    int data;
    PNode* next;
};

struct TStack {
    PNode* Top;
};

int randSTop();
bool StackIsEmpty(TStack& S);
int Peek(TStack& S);