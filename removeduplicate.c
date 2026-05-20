#include<stdio.h>
int main(){
    int arr[]={1,2,2,3,4,4,5,5,6};
    int size of arr/sizeof(arr[0]);
    int temp[size];
    int j=0;
    for(int i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
            arr[j]=-1;
            }
        }
    }
}
        