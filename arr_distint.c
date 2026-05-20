// remove the distinct element and print the remaining element
#include<stdio.h>
int main(){
    int low, high;
    printf("\n enter two number:");
    scanf("%d  %d", &low ,&high);
    for(int i = low; i<=high;i++){
        if(i<=10){
            printf("%d ",i);
        }
        else{
            int num = i;
            int freq[10]={0};
            while(num>0){
                int r = num%10;
                freq[r]++;
                num =num/10;
            }
            int flag = 1;
            for(int i =0; i<10; i++){
                if(freq[i]==1){
                    flag = 0;
                    break;
                }
            }
            if(!flag){
                printf(" %d",i);
            }
        }
    }
    return 0;
}