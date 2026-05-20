#include<stdio.h>
int main(){
    int count=0,i;
    int A[]={10,18,16,8,2,17};
    int n = sizeof(A)/sizeof(A[0]);
    printf("power of 2 in an array:");
    for(int i=0;i<n;i++){
         int m =A[i];
        if((m & (m-1)) == 0){
            printf(" %d",A[i]);
            count++;
        }
    }
    printf("\n count of element in an array:%d",count);
    
    return 0;
}