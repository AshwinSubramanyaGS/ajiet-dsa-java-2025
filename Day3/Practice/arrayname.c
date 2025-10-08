#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[]={1,2,3,4,5,6},*p=(int*)malloc(sizeof(int)*6);
    
    //Copying contents of arr to p
    for(int i=0;i<6;i++)p[i]=arr[i];

    //arr++;
    //printf("%i",*arr);
    printf("%i",*(arr+2));//relative traversal

    p++;//Absolute traversal

    printf("%i",*p);
}