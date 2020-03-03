template <class T> class Node;

template <class T>
class LinkedList {
    public:
        LinkedList();
        LinkedList(Node<T>* node);
		~LinkedList();
        Node<T>* front();
        Node<T>* back();
        void insert(T);
        void pop();
    protected:
        Node<T>* m_front;
        Node<T>* m_back;
};