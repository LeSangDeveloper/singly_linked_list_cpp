#ifndef __SINGLY_LINKED_LIST_H__
#define __SINGLY_LINKED_LIST_H__

template<typename E>
class SNode {
    private:
        E elem;
        SNode<E>* next;
        friend class SLinkedList<E>;
};

template<typename E>
class SlinkedList {
    private:
        SNode<E>* head;
    public:
        SLinkedList();
        ~SlinkedList();
        bool empty() const;
        const E& front() const;
        void addFront(const E& e);
        void removeFront();
}

#endif