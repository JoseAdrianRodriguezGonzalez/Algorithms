#include<stdio.h>
#define SWAP(a,b){\
    a^=b;\
    b^=a;\
    a^=b;\
}
long int s2l(char *argc){
    long int i =0,s=1,x=0;
    if(argc[i]=='-'){
        s=-1;
        i++;
    }
    while (argc[i]>='0'&&argc[i]<='9')
    {
        x*=10;
        x+=argc[i]-'0';
        i++;
    }
    return x*s;
}
int main(int argc,int *argv[]){
    if(argc!=5)
        return -1;
    
}