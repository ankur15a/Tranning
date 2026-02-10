#include<stdio.h>
int main(){
    int arr[8]={4,5,0,1,9,0,5,0};
    int n=8;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}