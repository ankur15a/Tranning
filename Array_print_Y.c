// Array in order of n^2
#include<stdio.h>

int main(){
    int a[]={1,3,6,8,0};
    int b[]={3,6,8,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    if(n!=n2){
        printf("size not same");
        return 0;
    }
    int flag = 0;
    int freq[100]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
        freq[b[i]]--;

    };
    for(int i=0;i<100;i++){
        if(freq[i]!=0){
            printf("No");
            return 0;
        }
    }
    printf("yes");
    return 0;
}
