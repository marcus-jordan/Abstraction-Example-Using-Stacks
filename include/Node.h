template <class T> 
class LinkedList;

template <class T>
class Node {
    public:
        Node();
        Node(T);
        Node(T, Node<T>*, Node<T>*);
        ~Node();
        T value();
        Node<T>* next();
        Node<T>* previous();
    private:
        T m_value;
        Node<T>* m_next;
        Node<T>* m_previous;
        friend class LinkedList<T>;
};