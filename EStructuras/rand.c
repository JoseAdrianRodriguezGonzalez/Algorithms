/**
x=\Sigma(x)/n
s²
 */
 #include<stdlib.h>
  #include<stdio.h>
  #include<time.h>
  #define N 1000
  int main(int argc,char*argv[]){
    int n,i,x[N],max,min;
    do{
        printf("Dame el numero de eleemntos: ");
        scanf("%d",&n);

    }while(n<1||n>N);
    printf("Dame el maximo: ");
    scanf("%d",&max);
    printf("Dame el minimo: ");
    scanf("%d",&min);
    srand(time(NULL));
    if(max<min){
        max^=min;
        min^=max;
        max^=min;

    }
    int d;

    printf("DU [%d,%d]\n ",min,max);
    for(i=0;i<n;i++){
        x[i]=rand()%(max-min+1)+min;
        printf("%d, %d\n",i+1,x[i]);
    }
    return 0;

  }