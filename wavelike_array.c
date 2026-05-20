#include<stdio.h>
int main(){
    int a[]={2,1,7,5,6,3};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j,temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[i]<a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}