#include<stdio.h>
int main(){
    int count=0,j,i,max=0,current=0;
    int a[]={7,0,5,1,3};
    int b[5]={0,1,3,5,7};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        current=current+a[i]-b[i];
        if(current>max)
        max=current;
    }
    printf("maximum inversion count:%d\n",max);
    


    return 0;
}