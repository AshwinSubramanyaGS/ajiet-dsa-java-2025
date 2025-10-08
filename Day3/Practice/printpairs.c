#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr=NULL;
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));

    printf("Enter array elements\n");
    for(int i=0;i<n;scanf("%d",arr+i++));

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            printf("\n%d  %d",arr[i], arr[j]);
}