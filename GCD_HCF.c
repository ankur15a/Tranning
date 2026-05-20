// find the gcd of two numbers
#include<stdio.h>
int main(){
    int a,b,gcd;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }

    printf("gcd(hcf)is %d",a);
    return 0;
}