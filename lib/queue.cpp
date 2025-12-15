#include"queue.hpp"
Queue::Queue():Vector(){}
void Queue::push(int v){
    this->push_front(v);
}
int Queue::pop(){
    if(_size==0)
        throw std::out_of_range("Fuera de rango");
    int res=_data[_size-1];
    _size--;
    return res;
}