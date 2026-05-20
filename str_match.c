#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="abc";
    int n1=strlen(str1);
    char str2[]="ba";
    int n2=strlen(str2);
    if(n1 < n2){
        printf("false");
        return 0;
    } 
    
    int j=0;
    for(int i=0;i<n1;i++){
        if(str1[i]==str2[j]){
            j++;
         }
    }
    if(j==n2){
        printf(" true");
    }else
    printf("false");

}