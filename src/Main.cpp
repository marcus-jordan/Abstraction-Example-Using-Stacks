#include <iostream>
#include "Node.cpp"
#include "LinkedListStack.cpp"

int main(){

    LinkedListStack<int> stack = LinkedListStack<int>();
    stack.push(12);
    stack.push(24);
    stack.push(57);
    std::cout << "size = " << stack.size() << std::endl;
    stack.printStack();
    std::cout << stack.peek() << std::endl;
    stack.pop();
    std::cout << "size = " << stack.size() << std::endl;
    stack.printStack();
    stack.push(24);
    stack.printStack();
    std::cout << "size = " << stack.size() << std::endl;
    stack.pop();
    stack.printStack();
    std::cout << stack.peek();
    stack.pop();
    stack.printStack();
    stack.pop();
    std::cout << stack.peek() << std::endl;
    
    return 0;
}
