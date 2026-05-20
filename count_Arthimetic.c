// count arthimetic subarray of given array and print
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,7};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0,total=0;
    for(int i=2;i<n;i++){
        if(a[i]-a[i-1]==a[i-1]-a[i-2]){
            count++;
            total+=count;   
        }else{

        }
    }
    printf("total count of arthimetic subarray is %d",total);
}