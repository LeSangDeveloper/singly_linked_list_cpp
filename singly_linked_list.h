#ifndef __SINGLY_LINKED_LIST_H__
#define __SINGLY_LINKED_LIST_H__
#include <cstddef>

template<typename E>
class SLinkedList;

template<typename E>
class SNode {
    private:
        E elem;
        SNode<E>* next;
        friend class SLinkedList<E>;
};

template<typename E>
class SLinkedList {
    private:
        SNode<E>* head;
    public:
        SLinkedList();
        ~SLinkedList();
        bool empty() const;
        const E& front() const;
        void addFront(const E& e);
        void removeFront();
};

#endif