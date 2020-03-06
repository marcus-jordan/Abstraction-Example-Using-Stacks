#pragma once

#include "..\include\Node.h"

template <class T>
Node<T>::Node(){
    m_next = m_previous = nullptr;
    m_value = T();
}
template <class T>
Node<T>::Node(T value) : Node(){
    m_value = value;
}
template <class T> 
Node<T>::Node(T value, Node<T>* previous, Node<T>* next)
    : m_value(value)
    , m_previous(previous)
    , m_next(next) {}
template <class T>
Node<T>::~Node(){
    m_previous = m_next = nullptr;
}
template <class T>
T Node<T>::value(){
    return m_value;
}
template <class T>
Node<T>* Node<T>::next(){
    return m_next;
}
template <class T>
Node<T>* Node<T>::previous(){
    return m_previous;
}