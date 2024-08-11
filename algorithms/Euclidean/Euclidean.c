#include"../algorithms.h"
int Euclidean(int a,int b );
void exchange(int *a,int *b);
int main(int argc,char *argv[]){
    if(argc!=3)
        return 1;
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    exchange(&a,&b);
    printf("The mcd(%d,%d)=%d",a,b,Euclidean(a,b));
    return 0;
}
void exchange(int *a,int *b){
    if(*b>*a){
        int aux=*b;
        *b=*a;
        *a=aux;
    }
}
int Euclidean(int a,int b ){
    int r=0;
    while (b != 0) {
        r = a % b;
        if(!r)
            break;
        a = b;
        b = r;
        
    }
    return b;
}