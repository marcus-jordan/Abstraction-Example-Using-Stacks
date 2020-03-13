#include "..\include\LinkedListStack.h"
#include "..\include\VectorStack.h"
#include <iostream>
#include <string>
#include <list>

int main(){

    std::list<IStack<std::string>*> stacks
    {
        new LinkedListStack<std::string>{"Stack","List","Linked","a","is","This"},
        new VectorStack<std::string>{"Stack","Vector","a","is","This"}
    };
    
    for(auto stack : stacks)
    {
        std::cout << "The stack size is: " << stack->size() << std::endl;
        while(!stack->empty())
        {
            std::cout << stack->peek() << " ";
            stack->pop();
        }
        std::cout << std::endl;
    }

    return 0;
}