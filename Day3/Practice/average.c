#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[10],avg;
    scanf("%d",&n);
    
    printf("Enter array elements\n");
    for(int i=0;i<n;scanf("%d",arr+i++));

    for(int i=0;i<n;avg+=arr[i++]);

    avg/=n;

    printf("The average of array is %d",avg);

}
