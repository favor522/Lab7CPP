#include "Lab7_2.h"

int main() {
	StackCheck(Top);
	if (StackCheck(Top) == false) {
		std::cout << Top.data << "\n";
	}
	return 0;
}
