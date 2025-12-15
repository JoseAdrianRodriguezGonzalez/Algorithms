#ifndef STACK_HPP
#define STACK_HPP
#include"vectorlib.hpp"
#include<stdexcept>
class Stack: public Vector{
    public:
        Stack();
        void push(int v);
        int pop();
};
#endif