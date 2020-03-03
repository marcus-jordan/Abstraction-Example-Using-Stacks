#include "..\src\LinkedList.cpp"

template <class T>
class LinkedListStack {
    public:
        LinkedListStack();
        ~LinkedListStack();
        bool empty();
        unsigned size();
        void push(T);
        void pop();
        T peek();
        void printStack();
        LinkedList<T>* stack;
    private:
        unsigned length;
};

