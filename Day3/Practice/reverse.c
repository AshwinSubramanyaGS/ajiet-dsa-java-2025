#include<stdio.h>
int main()
{
    int n,arr[10];
    scanf("%d",&n);
    
    printf("Enter array elements\n");
    for(int i=0;i<n;scanf("%d",arr+i++));

    for(int i=0;i<n/2;i++){
        arr[i]=arr[i]+arr[n-1-i];
        arr[n-1-i]=arr[i]-arr[n-1-i];
        arr[i]=arr[i]-arr[n-1-i];

    }

    printf("The resultant arrays is\n");
    for(int i=0;i<n;printf("%d ",*(arr+i++)));   
}