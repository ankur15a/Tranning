// matrix code is in order of  n^2
/* #include<stdio.h>
int main(){
    int i,j,count=0;
    int A[4][4]={{4,3,2,-1},
                {3,2,1,-1},
                {1,1,-1,-2},
                {-1,-1,-2,-3}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(A[i][j]<0)
            count++;
        }
    }
    printf("\n no. of count:%d",count);
    
    return 0;
}
*/
// count negative no. in a sorted matrix O(N^2)
 #include<stdio.h>
int main(){
    int n=4,m=4;
    int i=0,j=n-1,count=0;
    int A[4][4]={{4,3,2,-1},
                {3,2,1,-1},
                {1,1,-1,-2},
                {-1,-1,-2,-3}};
                while(i<4 && j>=0){
                    if(A[i][j]<0){
                        count+=m-i;
                        j=j-1;
                    }else{
                        i=i+1;
                    }
                }
                printf("\n counted element:%d",count);
                return 0;
             }


