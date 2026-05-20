// array comparision if both array ara match then print -1
#include<stdio.h>
int main(){
    int a[]={1,2,3,4};
    int b[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("-1");
    }else{
        printf("not same");
    }
    return 0;
    
}