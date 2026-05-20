// if the no. is repeated in the array then print true else false
#include<stdio.h>
int main(){
    int arr[]={1,2,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int freq[100]={0};
    int flag=0;
   for(int i=0;i<n;i++){    // step 1: = loop chalaoo
     freq[arr[i]]++;      // frequency ke index ko badhaoo
       if (freq[arr[i]]==2){    // compare the value
       flag =1;    // if the element found then return 
       break;
       } 
}
   if(flag==1){
        printf("true\n");

    }
    else{
        printf("False");

    }
    return 0;
}