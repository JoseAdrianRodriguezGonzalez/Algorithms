#include<stdio.h>
void binary(int x);
int main(){
    binary(10);
    return 0;
}
void binary(int x){
    char c[32];
    int i=0;
    while(x>0){
        if(x%2){
            c[i]='1';
        }else{
            c[i]='0';
        }
        x/=2;
        i++;
    }
    for (int j = i-1; j >= 0; j--)

        printf("%c",c[j]);
    
}