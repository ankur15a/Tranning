#include<stdio.h>
#include<string.h>
int main(){
    char a1[]="bba";
    char a2[]="aab";
    int k=1,count=0;
    int freq[26]={0};
    int strlen1=strlen(a1);
    int strlen2=strlen(a2);
    if(strlen1!=strlen2){
        printf("Not K-Anagram l");
        return 0;
    }
    
    /* for(int i=0;a1[i]!='\0';i++){
        freq[a1[i]-'a']++;

    }
    for(int i=0;a2[i]!='\0';i++){
        freq[a2[i]-'a']--;
    }
    */


    for(int i=0;i<26;i++){
        {
         if(freq[a1[i]-'a']>freq[a2[i]-'a']){
            count+=freq[a1[i]]-freq[a2[i]];
         }
            
        }
        
    }
    if(count<=k){
        printf("K-Anagram");
    }
    else{
        printf("Not K-Anagram");
    }
}