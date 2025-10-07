#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[20],n=0;
    scanf("%i",&n);

    printf("Enter Array Contents:\n");
    for(int i=0;i<n;scanf("%d",&a[i++]));

    printf("Array Contents are:\n");
    for(int i=0;i<n;printf("%d ",*(a+i++)));//relative traversal 

    
    
}