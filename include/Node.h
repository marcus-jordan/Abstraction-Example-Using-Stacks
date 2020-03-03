template <class T>
class Node {
    public:
        Node();
        Node(T);
        Node(T, Node<T>*, Node<T>*);
        ~Node();
        T value();
        Node<T>* m_next;
        Node<T>* m_previous;
    protected:
        T m_value;
};