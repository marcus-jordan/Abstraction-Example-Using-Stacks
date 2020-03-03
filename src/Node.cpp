#include "..\include\Node.h"

template <class T> 
Node<T>::Node(T value, Node<T>* previous, Node<T>* next)
    : m_value(value)
    , m_previous(previous)
    , m_next(next) {}
template <class T>
Node<T>::~Node(){
}
template <class T>
T Node<T>::value(){
    return m_value;
}