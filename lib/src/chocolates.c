#include<stdio.h>
int chocolates(int X,int Y,int envolturas,int choco);
int cambio(int E,int A,int B);
int main(){
    printf("%d",chocolates(15,1,3,1));
}
int chocolates(int X,int Y,int envolturas,int choco){
    return X/Y+cambio(X/Y,envolturas,choco) ;
}
int cambio(int E,int A,int B){
    int Zi;
    Zi=(E/A)*B;
    return Zi?Zi+cambio(Zi+E-((Zi*A)/B),A,B):0;
}