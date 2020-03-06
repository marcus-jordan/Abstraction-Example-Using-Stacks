#include "LinkedListStack.cpp"
#include <iostream>
#include <string>

int main(){

    LinkedListStack<std::string>* stack = new LinkedListStack<std::string>();

    std::string sentence [] = {"code", "to", "loves", "Jordan", "Marcus"};

    for(auto word : sentence){
        stack->push(word);
    }

    std::cout << "The stack has " << stack->size() << " elements that form a sentence." << std::endl;
    std::cout << stack->top()->value() << " is the first word in the stack." << std::endl;

    std::cout << "SENTENCE: ";
    while(!stack->empty()){
        std::cout << stack->peek() << " ";
        stack->pop();
    }
    std::cout << std::endl;

    if(stack->empty()){
        std::cout << "Sentence printed. The stack is now empty :)" << std::endl;
    }

    return 0;
}