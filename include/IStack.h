#pragma once 

template <class T>
class IStack{
    public:
        virtual ~IStack() {};
        virtual bool empty() = 0;
        virtual unsigned size() = 0;
        virtual void push(T) = 0;
        virtual void pop() = 0;
        virtual T peek() = 0;
};
