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
        int min=i;

        for(int j=i+1;j<size;j++){

            if(arr[min]>arr[j])
            {
                min=j;
                
            }

        }
        if(i!=min){
            arr[i]=arr[i]^arr[min];
                arr[min]=arr[i]^arr[min];
                arr[i]=arr[i]^arr[min];
        }

    }

    printf("\nThe Sorted array:\n");
    for(int i=0;i<size;printf("%d ",arr[i++]));
}