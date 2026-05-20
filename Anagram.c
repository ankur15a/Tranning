// Anagram 
#include<stdio.h>
int main(){
    char a1[]="silent";
    char a2[]="listen";
    int freq[26]={0};
    for(int i=0;a1[i]!='\0';i++){
        freq[a1[i]-'a']++;

    }
    for(int i=0;a2[i]!='\0';i++){
        freq[a2[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            printf("Not Anagram");
            return 0;
        }

    }
    printf("Anagram");
    return 0;

}
    