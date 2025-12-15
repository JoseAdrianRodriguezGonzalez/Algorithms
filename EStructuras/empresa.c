#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//#include"rand.h"
#define N 1000000

int main(int argc,char *argv[]){
    srand(time(NULL));
    unsigned long int a,b,ae,be,n,ne,x[N],nm,i;   
    double mx,sx;
    printf("Dame el valor inicial: ");
    scanf("%lu",&a);
    printf("Dame el valor final: ");
    scanf("%lu",&b);
    printf("La cantidad de piezas es: %lu",(b-a+1));
    printf("DAme la cantidad de muestras: ");
    scanf("%lu",&nm);
    for(i=0;i<n;i++)
        x[i]=rand()%(b-a+1)+a;
    for(i=1,mx=x[0];i<n;i++)
        mx+=x[i];    
    mx/=nm;
    for(i=1,mx=x[0],s2=x[0]*x[0];i<n;i++)
        sx+=(x[i]*x[i]);
    sx/=nm;
    sx-=(mx*mx);
    ae=mx+0.5-(sqrt(12*sx+1))/2;
    be=mx+0.5+(sqrt(12*sx+1))/2;
    ne=be-ae+1;
    printf("ne=%lu ",ne);
    return 0;
}
