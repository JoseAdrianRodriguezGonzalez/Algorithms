#ifndef QUEUE_HPP
#define QUEUE_HPP
#include"vectorlib.hpp"
#include<stdexcept>
class Queue:public Vector{
    public:
    Queue();
    void push(int v);
    int pop();
};
#endif