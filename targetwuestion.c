#include<stdio.h>
int main(){
    int arr[3]={3,2,4};
    int n=3;
    int sum=0;
    for(int i=1;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}