#include "vectorlib.hpp"
#include<iostream>
void Vector::resize(size_t new_capacity){
	std::unique_ptr<int []> _temp=std::make_unique<int[]>(new_capacity);
	for(size_t i=0;i<_size;i++){
		_temp[i]=_data[i];
	}
	_data=std::move(_temp);
	_capacity=new_capacity;
}

Vector::Vector():_size(0),_capacity(10){
	_data=std::make_unique<int[]>(_capacity);
}
Vector::Vector(size_t capacity):_size(0),_capacity(10){	
	_data=std::make_unique<int[]>(_capacity);
}
void Vector::push_back(int value){
	if(_size==_capacity){
		resize(_capacity*2);
	}
	_data[_size++]=value;
}
void Vector::push_front(int value){
	if(_size==_capacity){
		resize(_capacity*2);
	}
	for(size_t i=_size;i>0;i--){
		_data[i]=_data[i-1];
	}
	_data[0]=value;
	_size++;
}
[[nodiscard]] size_t Vector::getterSize()const{
	return _size;
}
[[nodiscard]] size_t Vector::getterCapacity()const{
	return _capacity;
}
int& Vector::operator[](size_t index){
	if(index>=_size)
		throw std::out_of_range("ESta fuera de rango");
	return _data[index];
}

