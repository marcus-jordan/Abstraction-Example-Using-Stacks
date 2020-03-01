#include "Node.h"

template <class T>
Node<T>::Node(){
}
template <class T>
Node<T>::Node(T value, Node<T>* backPtr, Node<T>* forwardPtr) 
    : value(value)
    , backPtr(backPtr)
    , forwardPtr(forwardPtr) {}
template <class T>
Node<T>::Node(T value) : Node(value, nullptr, nullptr){  
}
template <class T>
Node<T>* Node<T>::next(){
    return forwardPtr;
}
template <class T>
Node<T>* Node<T>::back(){
    return backPtr;
}
template <class T>
T Node<T>::getValue(){
    return value;
}