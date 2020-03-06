#pragma once 

#include "..\include\LinkedListStack.h"
#include "LinkedList.cpp"

template <class T>
LinkedListStack<T>::~LinkedListStack(){
    delete m_stack;
}
template <class T>
LinkedListStack<T>::LinkedListStack(){
    m_stack = new LinkedList<T>();
}
template <class T>
bool LinkedListStack<T>::empty(){
    return m_stack->empty();
}
template <class T>
unsigned LinkedListStack<T>::size(){
    return m_stack->length();
}
template <class T>
void LinkedListStack<T>::push(T element){
    m_stack->insert(element);
}
template <class T>
void LinkedListStack<T>::pop(){
    m_stack->pop();
}
template <class T>
T LinkedListStack<T>::peek(){
    return (!empty()) ? top()->value() : T();
}
template <class T>
Node<T>* LinkedListStack<T>::top(){
    return m_stack->back();
}