#include "Lab7_2.h"

int main1() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	TStack S;
	S.Top = nullptr;
	if (StackIsEmpty(S) == TRUE) {
		std::cout << "Голова стэка пуста!" << "\n";
		return 1;
	}
	else {
		std::cout << "Значение головы стэка" << Peek(S) << "\n";
	}
	return 0;
}
