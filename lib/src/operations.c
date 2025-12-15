#include "operations.h"
float suma(float a,float b){
    return a+b;
}
int factorial(int n){
    if(!n)
        return 1;
    else   
        return n*factorial(n-1);
    return !n?1:(n*factorial(n-1));
}
int fibonnaci(int n){
    return n>0?(n==1?1:fibonnaci(n-1)+fibonnaci(n-2)):0;
}