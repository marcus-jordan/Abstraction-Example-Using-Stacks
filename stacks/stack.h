#include "node.cpp"

template <class T>
class Stack {
    public:
        Stack();
        ~Stack();
        bool empty();
        int size();
        void push(T);
        void pop();
        T peek();
        void printStack();
        Node<T>* top;
    private:
        int length;
};