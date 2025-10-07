#include<stdio.h>

int main(){
    int arr[20],n=0,key=12,low,high,mid;
    printf("Enter array size: ");
    scanf("%i",&n);

    printf("Enter Array Contents:\n");
    for(int i=0;i<n;scanf("%d",&arr[i++]));

    for(int i=0;i<n;i++){
        int t=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[t])t=j;
        }
        if(t!=i){
            arr[i]=arr[i]+arr[t];
            arr[t]=arr[i]-arr[t];
            arr[i]=arr[i]-arr[t];
        }
    }

     printf("Array Contents:\n");
    for(int i=0;i<n;printf("\n%d",arr[i++])); 

    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("%d element found at pos %d",key,mid+1);
            return 0;
        }
        else if(arr[mid]>key){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    printf("%d element not found",key);
}