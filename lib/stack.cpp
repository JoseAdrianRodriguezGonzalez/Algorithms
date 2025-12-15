#include"stack.hpp"
Stack::Stack():Vector(){}
void Stack::push(int v){
    this->push_back(v);
}
int Stack::pop(){
    if(_size==0){
        throw std::out_of_range("Fuera de rango");
    }
    int res=_data[_size-1];
    _size--;
    return res;
}
