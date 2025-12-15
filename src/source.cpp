#include "vectorlib.hpp"
#include "stack.hpp"
#include<iostream>
int main(){
	Stack stck;
	stck.push(2);
	stck.push(3);
	std::cout<<stck.pop();
	return 0;	
}
