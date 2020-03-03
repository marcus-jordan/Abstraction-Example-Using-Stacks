#include "..\include\LinkedListStack.h"

template <class T>
LinkedListStack<T>::~LinkedListStack(){
    while(length) pop();
    delete stack;
}
template <class T>
LinkedListStack<T>::LinkedListStack(){
    length = 0;
    stack = new LinkedList<T>();
}
template <class T>
bool LinkedListStack<T>::empty(){
    return (stack->front()) ? false : true;
}
template <class T>
unsigned LinkedListStack<T>::size(){
    return length; 
}
template <class T>
void LinkedListStack<T>::push(T element){
    stack->insert(element);
    length++;
}
template <class T>
void LinkedListStack<T>::pop(){
    stack->pop();
    length--;
}
template <class T>
T LinkedListStack<T>::peek(){
    return (stack->front()) ? stack->back()->value() : T();
}
template <class T>
void LinkedListStack<T>::printStack(){
    for(Node<T>* node = stack->front(); node; node = node->m_next){
        std::cout << node->value() << " ";
    }
    std::cout << std::endl;
}