#include<stdio.h>
#include<stdlib.h>
int main(){
    int size=0,*arr,key=0;

    scanf("%i",&size);

    arr=(int*)calloc(size,sizeof(int));
    
    printf("Enter the array contents:\n");
    for(int i=0;i<size;scanf("%d",&arr[i++]));

    printf("\nEnter key element to search for: ");
    scanf("%d",&key);

    for(int i=0;i<size;i++){
        int min=i;

        for(int j=i+1;j<size;j++){

            if(arr[min]<arr[j])
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

    int high=size,low=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            printf("%d found at pos %i",key,mid+1);
            return 0;
        }
        if(arr[mid]>key)low=mid+1;
        else if(arr[mid]<key)high=mid-1;

    }
    printf("%d found not found",key);
    return 0;
}