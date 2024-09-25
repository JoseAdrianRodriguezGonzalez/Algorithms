#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#define pi 3.1415
#define N 3
float norm(float mean,float desviation);
int main(){
    //Therefore analyze them as the subcategories
    float mean,desv,d,sumas[N];
    int histo[N];
    int n;
    srand(time(NULL));
    do{
    printf("Enter the mean");
    scanf("%f",&mean);
    printf("Enter the desviation");
    scanf("%f",&desv);
    }while(mean<=0 || desv <=0);
    do{
        printf("Enter the number of elements");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=0;i<N;i++){
        histo[i]=0;
        sumas[i]=0;
    }
    for(int i=0;i<n;i++){
        d=norm(mean,desv);
        printf("%f\n",d);
        if(d<25){
            histo[0]+=1;
            sumas[0]+=d;
        }else if(d>25 && d<35){
            histo[1]+=1;
            sumas[1]+=d;
        }else{
            histo[2]+=1;
            sumas[2]+=d;
        }
    }
    float sumas_totales=sumas[0]+sumas[1]+sumas[2];
    printf("rapidos= %d\nnormales=%d \n lentos= %d\n",histo[0],histo[1],histo[2]);
    printf("Sumas de rapidos=%f\n Sumas de normales=%f\n Sumas de lentos=%f\n Sumas de totales=%f",sumas[0],sumas[1],sumas[2],sumas[0]+sumas[1]+sumas[2]);

    return 0;
}
float norm(float mean,float desviation){
    float u1=(float)rand()/RAND_MAX;
    float u2=(float)rand()/RAND_MAX;
    float z1=sqrt(-2*log(u1))*sin(2*pi*u2);
    return z1*desviation+mean;
}