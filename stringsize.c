#include<stdio.h>
int main(){
    char str[]="abcabc";
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++;
        if(freq[str[i]==2]){
            printf("first repeating charc %c",str[i]);
            break;
        }
    }
return 0;
}