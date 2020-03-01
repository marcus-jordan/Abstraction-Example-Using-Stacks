#include "..\include\Stack.h"
#include <iostream>

template <class T>
Stack<T>::~Stack(){
}
template <class T>
Stack<T>::Stack(){
    length = 0;
    top = nullptr;
}
template <class T>
bool Stack<T>::empty(){
    return (top) ? false : true;
}
template <class T>
int Stack<T>::size(){
    return length; 
}
template <class T>
void Stack<T>::push(T element){
    if(empty()){
        top = new Node<T>(element);
    }
    else{
        top->forwardPtr = new Node<T>(element, top, nullptr);
        top = top->forwardPtr;
    }
    length++;
}
template <class T>
void Stack<T>::pop(){
   if(top){
        Node<T>* tempPtr = top->backPtr;
        delete top;
        top = tempPtr;
        length--; 
    }
    else
        std::cerr << "cannot pop element from empty stack." << std::endl; 
}
template <class T>
T Stack<T>::peek(){
    return (top) ? top->getValue() : T();
}
template <class T>
void Stack<T>::printStack(){
    
    for(Node<T>* node = top; node; node = node->backPtr){
        std::cout << node->getValue() << " ";
    }
    std::cout << std::endl;
}