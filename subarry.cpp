/*Having this array
-1 2 4 -3 5  2 -5 2
Try to find out an optimized algorithm that can sum efficently
*/
#include<iostream>
#include<vector>
int sum(int *array,int size){
    int res=array[0];
    int maxEnding=res;
    for(int i=1;i<size;i++){
         maxEnding=(maxEnding+array[i])>array[i]?(maxEnding+array[i]):array[i];
         res=res>maxEnding?res:maxEnding;
    }
    return res;
}
int main(){
    int array[]={-1,2,4,-3,5,2,-5,2};
    int size=sizeof(array)/sizeof(array[0]);
    std::cout<<sum(array,size);
    
    return 0;
}