#include "Lab7_2.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	TStack S;
	S.Top = nullptr;
	
	if (StackIsEmpty(S) == TRUE) {
		return 1;
		std::cout << "Голова стэка пуста!" << "\n";
	}
	else {
		std::cout << "Значение головы стэка" << Peek(S) << "\n";
	}
	return 0;
}
