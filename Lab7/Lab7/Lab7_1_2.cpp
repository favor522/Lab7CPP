#include "Lab7_1.h"

int main1() {
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	LinkedMyNode* List = createList();
	generatetheNumber(List, Medium);
	printList(List);
	deleteElement(List, Medium);
	printList(List);
	return 0;
}