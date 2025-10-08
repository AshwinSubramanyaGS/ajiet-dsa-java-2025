#include<stdio.h>
#include<ctype.h>

int main(){
    char arr[100];
    int count[26] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]s", arr);

    
    for(int i = 0; arr[i] != '\0'; i++){
        if(isalpha(arr[i])){
            count[toupper(arr[i]) - 'A']++;
        }
    }
  
    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }
    return 0;
}