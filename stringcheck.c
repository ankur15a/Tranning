// string check that how many stars and hashes are there

#include<stdio.h>
#include<string.h>
int main(){
    char s[]="*******#####";

    int count1=0,count2=0;
    for(int i=0;i<8;i++){
        if(s[i]=='#')
            count1++;
            else if (s[i]=='*')
                count2++;
    }
           if(count1==count2){
            printf("balance string");
           }
           else if(count1>count2){
            printf("not balance due to %d * needed",count1-count2);
           }
            else{
                printf("not balance due to %d # needed",count2-count1);
            }
            
           
        
    return 0;

}