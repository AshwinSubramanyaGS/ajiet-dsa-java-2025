#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n=10;
    arr=(int*)calloc(n,sizeof(int));
    printf("Enter any integer:\n");
    scanf("%i",&n);
    printf("Enter array contents: ");
    for (int i=0;i<n;i++){
    scanf("%d",arr+i);//relative traversal
    }
    printf("The contents entered are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",*arr);
        arr++;//absolute traversal 
    }

    printf("\nAfter loop%d",*arr);
    return 0;
}