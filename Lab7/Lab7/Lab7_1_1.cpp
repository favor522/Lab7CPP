#include "Lab7_1.h"

LinkedMyNode* createList() {
	auto List = new LinkedMyNode();
	List->Begin = nullptr;
	List->End = nullptr;
	return List;
};
LinkedMyNode* generatetheNumber(LinkedMyNode* List, int& Medium) {
    if (List == nullptr) {
        std::cout << "Список был успешно создан, начинаем генерацию" << "\n";
    }
    else {
        std::cout << "Ошибка в создании списка! Передайте ошмбку разработчику для её исправления" << "\n";
    }
    int List_lenght = rand() % 10 - 0;
    int Sum = 0;
    MyNode* Begin = nullptr;
    for (int i = 0; i < List_lenght; ++i) {
        MyNode* newMyNode = new MyNode;
        newMyNode->data = rand() % 30 - 0;
        Sum =+ newMyNode->data;
        count++;
        newMyNode->next = Begin;
        Begin = newMyNode;
    }
    Medium = Sum / count;
    return List;
}
void printList() {
    MyNode* Begin = nullptr;
    MyNode* current = Begin;
    std::cout << "List elements: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
}