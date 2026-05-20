#include<stdio.h>
int main(){
    int a[4][4]={{0,0,1,1},
                 {1,1,1,1},
                 {1,1,0,1},
                 {0,0,1,0}};
    int max=-1;
    int index=-1;
    for(int i=0;i<4;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(a[i][j]==1){
                count++;
            }
        }
        if(max<count){
            int temp=max;
            max=count;
            count=temp;
            index=i;
        }
    }
    printf(" max count is %d",max);
    printf(" row index is %d",index);
     return 0;
}
