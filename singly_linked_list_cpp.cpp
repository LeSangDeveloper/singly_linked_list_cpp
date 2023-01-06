#include"singly_linked_list.h"

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
void addFront(const E& e) {
    SNode<E>* v = new SNode<E>;
    v−>elem = e;
    v−>next = head;
    head = v;
}

template <typename E>
void SLinkedList<E>::removeFront() {
    SNode<E>* old = head;
    head = old−>next;
    delete old;
}