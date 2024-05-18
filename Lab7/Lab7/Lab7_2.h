#pragma once
#include <iostream>
#include <Windows.h>

struct Node {
	Node* Next;
	int Data;
};


bool StackCheck(Node* Top);