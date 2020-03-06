#include <initializer_list>

template <class T>
class Node;

template <class T>
class LinkedList {
    public:
        LinkedList();
        LinkedList(std::initializer_list<T>);
        LinkedList(Node<T>* node);
		~LinkedList();
        unsigned length();
        bool empty();
        Node<T>* front();
        Node<T>* back();
        void insert(T);
        void pop();
    private:
        Node<T>* m_front;
        Node<T>* m_back;
        unsigned m_length;
};