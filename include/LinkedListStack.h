template <class T> 
class LinkedList;
template <class T> 
class Node; 

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
        Node<T>* top();
    private:
        LinkedList<T>* m_stack;
};

