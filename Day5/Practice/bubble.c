#include<stdio.h>
#include<stdlib.h>
int main(){
    int size=0,*arr;

    scanf("%i",&size);

    arr=(int*)calloc(size,sizeof(int));
    
    printf("Enter the array contents:\n");
    for(int i=0;i<size;scanf("%d",&arr[i++]));

    printf("The original array:\n");
    for(int i=0;i<size;printf("%d ",arr[i++]));

    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }

    }

    printf("\nThe Sorted array:\n");
    for(int i=0;i<size;printf("%d ",arr[i++]));
}