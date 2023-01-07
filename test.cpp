#include"singly_linked_list.h"
#include<iostream>

using namespace std;

int main() {
    SLinkedList<int> b;
    b.addFront(13);
    cout << b.front() << endl; 
    return 1;
}