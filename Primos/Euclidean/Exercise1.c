#include "../algorithms.h"
struct fraction{
    int numerator;
    int denominator;
};
int Euclidean(int a,int b );
void exchange(int *a,int *b);
int main(int argc,char *argv[]){
    if(argc!=3)
        return 1;
    struct fraction f1;
    f1.numerator=atoi(argv[1]);
    f1.denominator=atoi(argv[2]);
    int divisor=Euclidean(f1.numerator,f1.denominator);
    printf("The fraction %d/%d=%d/%d",f1.numerator,f1.denominator,f1.numerator/divisor,f1.denominator/divisor);
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