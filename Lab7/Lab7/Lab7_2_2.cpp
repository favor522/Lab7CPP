#include "Lab7_2.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	TStack S;
	S.Top = nullptr;
	
	if (StackIsEmpty(S) == TRUE) {
		return 1;
		std::cout << "������ ����� �����!" << "\n";
	}
	else {
		std::cout << "�������� ������ �����" << Peek(S) << "\n";
	}
	return 0;
}
