#include "Lab7_2.h"
int randSTop() {
    return rand() % 5 + 0;
}
bool StackIsEmpty(TStack& S) {
    if (S.Top == nullptr) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int Peek(TStack& S){
    return S.Top->data;
}