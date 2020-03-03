#include "..\include\LinkedList.h"

template <class T>
LinkedList<T>::LinkedList(){ 
    m_front = m_back = nullptr;
}
template <class T>
LinkedList<T>::LinkedList(Node<T>* node){ 
    m_front = m_back = node;
}
template <class T>
LinkedList<T>::~LinkedList(){
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
void LinkedList<T>::insert(T value){
    Node<T>* newnode = new Node<T>(value, m_back, nullptr);
    if(!m_front){
        m_front = m_back = newnode; 
    }
    else{
        m_back = m_back->m_next = newnode;
    }
}
template <class T>
void LinkedList<T>::pop(){
    if(!m_front){
        return;
    }
    if(m_front == m_back){
        delete m_front;
        m_front = m_back = nullptr;
        return;
    }
    else{
        m_back = m_back->m_previous;
        delete m_back->m_next;
        m_back->m_next = nullptr;
    }
}