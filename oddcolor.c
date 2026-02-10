// find the ballon color appering odd number of times
#include<stdio.h>
int main(){
    char s[]={'r','b','g','y','r','b','g','y'};
    int n=sizeof(s)/sizeof(s[0]);
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count%2!=0){
            printf("\n odd %c number %d",s[i],count);
           return 0;
        }
       

    }
    printf("no odd color");

    return 0;
   
}