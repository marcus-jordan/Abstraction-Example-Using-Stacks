#pragma once 

#include "IStack.h"
#include "LinkedList.h"

#include <initializer_list>

template <class T>
class LinkedListStack : public IStack<T>{
    public:
        LinkedListStack();
        LinkedListStack(std::initializer_list<T> values);
        ~LinkedListStack();
        bool empty() override;
        unsigned size() override;
        void push(T) override;
        void pop() override;
        T peek() override;
    private:
        Node<T>* top();
        LinkedList<T>* m_stack;
};
template <class T>
LinkedListStack<T>::~LinkedListStack(){
    delete m_stack;
}
template <class T>
LinkedListStack<T>::LinkedListStack(){
    m_stack = new LinkedList<T>();
}
template <class T>
LinkedListStack<T>::LinkedListStack(std::initializer_list<T> values){
    m_stack = new LinkedList<T>(values);
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

