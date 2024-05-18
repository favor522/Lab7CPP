#include "Lab7_1.h"

LinkedMyNode* createList() {
	auto List = new LinkedMyNode();
	List->Begin = nullptr;
	List->End = nullptr;
	return List;
};
LinkedMyNode* generatetheNumber(LinkedMyNode* List, int& Medium) {
    int Num, Sum = 0;
    std::cout << "Введите количество узлов, которое надо создать" << "\n";
    std::cin >> Num;
    for (int i = 0; i < Num; ++i) {
        MyNode* newMyNode = new MyNode;
        newMyNode->data = rand() % 30 + 1;
        Sum = Sum + newMyNode->data;
        newMyNode->next = List ->Begin;
        List -> Begin = newMyNode;
    }
    Medium = Sum / 3;
    std::cout << "Среднее значение: " << Medium << "\n";
    return List;
}
void printList(LinkedMyNode* List) {
    auto current = List -> Begin;
    std::cout << "Односвязный список: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    system("pause");
}
void deleteElement(LinkedMyNode* List, int& Medium) {
    MyNode* current = List->Begin;
    MyNode* prev = nullptr;
    while (current != nullptr) {
        if (current->data < Medium) {
            std::cout << "Удалён элемент: " << current->data << std::endl;
            if (prev == nullptr) {
                List->Begin = current->next;
            }
            else {
                prev->next = current->next;
            }
            MyNode* p = current;
            current = current->next;
            delete p;
        }
        else 
        {
            prev = current;
            current = current->next;
        }
    }
}
