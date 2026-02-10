#include<stdio.h>
int main(){
    int arr[6]={2,1,5,3,4,6};
    int n=6;
    int k=3;
    int h=0;
    int max=arr[0];
    
    for(int i=1;i<6;i++){
        if(arr[i]>max){
            max=arr[i];

        }
        arr[i]=max;
        }
        
        
    printf("Maximum element in first window of size 3 is %d",max);
    return 0;
}