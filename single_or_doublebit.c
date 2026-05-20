#include<stdio.h>
int main(){
    int a[]={1,1,1,0};
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    while(i<n-1){
        if(a[i]==1){
            i=i+2;
        
    }else{
        i=i+2;
    }
}

if(i==n-1){
    printf("single bit");

}else{
    printf("double bit");
}
return 0;
}