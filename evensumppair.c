    //count the even no. of pair in an array
 #include<stdio.h>
int main(){
    int arr[10]={2,3,5,6,8,7,4,1};
    int n=8;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<4;j++){
            if((arr[i]+arr[j])%2==0){
                printf("(%d,%d)\n",arr[i],arr[j]);
                count++;
            }  
        } 
    }
      printf("%d pair of an array",count);
      return 0;
}
