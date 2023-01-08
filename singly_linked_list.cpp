#include"singly_linked_list.h"

#include<cstddef>
#include<string>

using namespace std;

template <typename E>
SLinkedList<E>::SLinkedList()
:head(NULL) {}

template <typename E>
SLinkedList<E>::~SLinkedList() {
    while (!empty()) removeFront();
}

template <typename E>
bool SLinkedList<E>::empty() const {
    return head == NULL;
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {
    SNode<E>* v = new SNode<E>;
    v->elem = e;
    v->next = head;
    head = v;
}

template <typename E>
void SLinkedList<E>::removeFront() {
    SNode<E>* old = head;
    head = old->next;
    delete old;
}

template <typename E>
const E& SLinkedList<E>::front() const {
    return head->elem;
}

template class SLinkedList<int>;
template class SLinkedList<double>;
template class SLinkedList<float>;
template class SLinkedList<string>;