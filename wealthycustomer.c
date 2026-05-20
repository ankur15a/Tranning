// wealthy cutomer problem
#include<stdio.h>
int main(){
    int i,j;
    int amount[4][4]={
        {6,6,6,6},
        {9,6,7,2},
        {9,3,2,-1},
        {2,-4,-1,-8},
    };
int sum[4]={0};
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
    sum[i] += amount[i][j];
            }
        }
        int max = sum[0];
        int index = 0;
        for(int i =1; i<4; i++){
            if(sum[i]>max){
                max=sum[i];
                index=i;
            }
        }
        printf("wealthy customer %d with amount %d", index, max);


    return 0;
}