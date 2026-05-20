 //rotate a string by k characters brute force approach
 #include<stdio.h>
#include<string.h>
void rotate(char str1[], int n){
    char temp = str1[0];
    for(int i=0;i<n;i++){
        str1[i]=str1[i+1];
    }
    str1[n-1] = temp;
    printf(" \n rotated string is %s",str1);    
    
}
int main(){
    char str1[]="abcd";
    int n1=strlen(str1);
    char str2[]="bcda";
    int n2=strlen(str2);
    if(n1!=n2){
        printf("false");
        return 0;
    }
    rotate(str1,n1);
    for(int i=0;i<n1-1;i++){
    rotate(str1,n1);
    }
    return 0;

}