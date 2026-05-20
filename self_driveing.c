// self driving number
#include<stdio.h>
int main(){
    int low,high,n,i,j,flag;
    printf("\n enter two number range:");
    scanf("%d %d",&low,&high);
    for(int i=low;i<=high;i++){
           n = i;
        while(n>0){
            j=n%10;
            if(j!=0&&i%j==0){
                n=n/10;
                flag=1;
            }else{
                flag=0;
                break;
            }

        }
        if(flag)
            printf("%d ",i);
   
}
return 0;
}
