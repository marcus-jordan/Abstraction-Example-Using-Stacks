#include <iostream>
#include "stack.cpp"

int main(){

    Stack<int> stack = Stack<int>();
    stack.push(12);
    stack.push(24);
    stack.push(57);
    stack.printStack();
    std::cout << stack.peek() << std::endl;
    stack.pop();
    stack.printStack();
    stack.pop();
    std::cout << stack.peek();
    stack.pop();
    stack.printStack();
    stack.pop();
    std::cout << stack.peek() << std::endl;

    return 0;
}
