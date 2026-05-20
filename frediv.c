#include<stdio.h>
int main(){
    int n=8,k=2;
    int a[]={1,2,2,3,3,3,3,4};
    int freq[10]={0};
    for(int i=0;i<8;i++){
    freq[a[i]]++;
    }
    int sum=0;
    for(int j=0;j<10;j++){
        if(freq[j]%k==0){
        sum +=freq[j]*j;
    }
    }
    printf("sum:%d",sum);
    

    return 0;
}