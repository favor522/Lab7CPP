#include "Lab7_2.h"

//Node* createTStack() {
struct TStack {
	Node* Top = nullptr;
};
//return Node* Top;
//}


bool StackCheck(Node* Top) {
	if (Top == nullptr) {
		return true;
	}
	else {
		return false;
	}
}