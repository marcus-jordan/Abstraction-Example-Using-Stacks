#pragma once

#include <initializer_list>
#include <vector>

template <class T>
class IStack;

template <class T>
class VectorStack : public IStack<T>{
    public:
        VectorStack();
        VectorStack(std::initializer_list<T>);
        ~VectorStack();
        bool empty() override;
        unsigned size() override;
        void push(T) override;
        void pop() override;
        T peek() override;
    private:
        std::vector<T>* m_stack;
};
template <class T>
VectorStack<T>::VectorStack(){
    m_stack = new std::vector<T>;
}
template <class T> 
VectorStack<T>::VectorStack(std::initializer_list<T> values) : VectorStack(){
    for(auto value : values){
        push(value);
    }
}
template <class T>
VectorStack<T>::~VectorStack(){
    m_stack->clear();
}
template <class T>
bool VectorStack<T>::empty(){
    return m_stack->empty();
}
template <class T>
unsigned VectorStack<T>::size(){
    return m_stack->size();
}
template <class T>
void VectorStack<T>::push(T value){
    m_stack->push_back(value);
}
template <class T>
void VectorStack<T>::pop(){
    m_stack->pop_back();
}
template <class T>
T VectorStack<T>::peek(){
    return m_stack->back();
}
