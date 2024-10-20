#include<stdio.h>
#define N 100000
int main(){
    long int i, j,a[N+1];
    a[0]=0;//you initialize the 0 and 1 as 0, they are not considered as primes
    for ( i = 2,a[1]=0; i <=N; i++)//ypu start with the first prime number, 2 and the array you put the value of 1
    {
        a[i]=1;
    }
    //you start counting with the first prime
    for(i=2;i*i<=N;i++){//start with 2 on i and verify if i^2
        if(a[i]){//if is prime
            for ( j = i*i; j<= N; j+=i)
            {
                a[j]=0;
            }
        }
    }
    for ( i = 0; i <=N; i++)
    {
        if(a[i])
           printf("%4d",i);
    }
    return 0;
}