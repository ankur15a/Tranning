//find the nth term
#include<stdio.h>
int main(){
    printf("0 , 0, 2, 1, 4, 2, 6, 3, 8, 4, ...\n");
    int n;
    printf("enter the nth position:");
    scanf("%d", &n);
    if(n%2!=0){
        printf("the nth term is %d", n-1);
    }
    else{
        printf("the nth term is %d", (n-1)/2);
    }
    return 0;
    
}