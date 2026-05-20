//find first repeating character in a string, delete it, and reverse the string.

#include<stdio.h>
#include<string.h>
void check_repeat(char *ch, int len, int *flag, int *index){
    int freq[256]={0};
    for(int i = 0; ch[i]!='\0'; i++){
        freq[ch[i]]++;
        if(freq[ch[i]] == 2){
            printf("\n first repating char % c", ch[i]);
            *index=i;
            *flag= 1;
            break;
        }else{
            *flag=0;
        }

    }
}
void delete_chara(char *ch, int len, int index){
    for(int i=index; i<=len-1; i++){
        ch[i] = ch[i + 1];
        
    }

}
void revers_char(char *ch){
    int i=0;
    int j=strlen(ch)-1;
    while(i<j){
        char temp =ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++;
        j--;
    }
}
int main(){
    char str[]="abcabc";
    int len = strlen(str);
    printf("\nstring len %d ",len);
    int flag=0;
    int index;
    do{
    check_repeat(str, len, &flag, &index);
    if(flag==1){
    delete_chara(str,len,index);
     printf("\n delet string %s",str);
    revers_char(str);
    printf("\n revers string %s",str);
    }
    } while(flag==1);
    if(flag==0){
        printf("\n No repeated characters found\n");
    }
    return 0;
}