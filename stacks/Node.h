template <class T>
class Node {
    public:
        Node();
        Node(T);
        Node(T, Node<T>*, Node<T>*);
        Node<T>* next();
        Node<T>* back();
        T getValue();
        Node<T>* forwardPtr;
        Node<T>* backPtr;
    private:
        T value; 
};