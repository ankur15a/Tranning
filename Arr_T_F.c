// if the no. is repeated in the array then print true else false
#include<stdio.h>
int main(){
    int arr[]={1,2,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int freq[100]={0};
    int flag= 0;
   for(int i=0;i<n;i++){
     freq[arr[i]]++;
       if (freq[arr[i]]==2){
       flag =1;
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