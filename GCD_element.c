#include<stdio.h>
int gcd(int a,int b){
        while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
        }
        return a;
}
int main(){
    int a[]={15,10,25,40,85,65};
    int n = sizeof(a)/sizeof(a[0]);
    int result =a[0];
    for(int i=1;i<n;i++){
        result=gcd(result,a[i]);
    }
    printf("\n gcd of an array: %d",result);

    return 0;
}