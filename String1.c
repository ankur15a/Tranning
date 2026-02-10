#include<stdio.h>
int main(){
    
    int freq[256]={0};
    freq['a']=2;
    freq++['a']; //stand alone
    printf("freq [a] %d",freq['a']);
     5++;//constant me + nhi hota h
    return 0;
}
