#pragma once
#include <iostream>

struct Node {
	Node* Next;
	int Data;
};

struct TStack {
	Node* Top;
};

bool StackCheck(Node *Top);