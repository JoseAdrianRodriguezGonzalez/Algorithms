#include<stdio.h>
int convert();
int main(int argc, int *arvg[]){
    printf("The number is: %d",convert());    
    return 0;
}
int convert(){
    int number=0;
    char c;
    while (1)
    {
        c=getchar();
        if(c=='\n'){
            break;
        }
        if(c>='0'&&c<='9'){
            number*=10;
            number+=(c-'0');

        }
    }
    return number;
}