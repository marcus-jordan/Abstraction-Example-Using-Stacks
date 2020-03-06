#pragma once 

#include "..\include\LinkedList.h"
#include "Node.cpp"

template <class T>
LinkedList<T>::LinkedList(){ 
    m_front = m_back = nullptr;
    m_length = 0;
}
template <class T>
LinkedList<T>::LinkedList(std::initializer_list<T> values) : LinkedList(){
    for(auto value : values){
        insert(value);
    }
}
template <class T>
LinkedList<T>::~LinkedList(){
    while(!empty()){
        pop();
    }
}
template <class T>
Node<T>* LinkedList<T>::front(){
    return m_front;
}
template <class T>
Node<T>* LinkedList<T>::back(){
    return m_back;
}
template <class T>
unsigned LinkedList<T>::length(){
    return m_length;
}
template <class T>
void LinkedList<T>::insert(T value){
    Node<T>* node = new Node<T>(value, m_back, nullptr);
    if(empty())
        m_front = m_back = node; 
    else
        m_back = m_back->m_next = node;
    m_length++;
}
template <class T>
bool LinkedList<T>::empty(){
    return (m_length == 0) ? true : false;
}
template <class T>
void LinkedList<T>::pop(){
    if(empty()){
        return;
    }
    else if(length() == 1){
        delete m_front;
        m_front = m_back = nullptr;
    }
    else{
        m_back = m_back->m_previous;
        delete m_back->m_next;
        m_back->m_next = nullptr;
    }
    m_length--;
}