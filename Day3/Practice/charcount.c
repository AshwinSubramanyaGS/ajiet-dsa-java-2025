#include<stdio.h>
int main(){
    char arr[100];
    int count[26]={0};

    scanf("%[^\n]s",arr);

    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]>='A'&&arr[i]<='Z'){
            count[arr[i]-'A']++;
        }
        else if(arr[i]>='a'&&arr[i]<='z'){
            count[arr[i]-'a']++;
        }
    }

    for(int i=0;i<26;i++){
            if(count[i]!=0)
                printf("%c- %d times\n",'a'+i,count[i]);
        }
}