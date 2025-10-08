//Input a dynamic array and square it even contents and display the resulting array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p=NULL;
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("Enter array elements\n");
    for(int i=0;i<n;scanf("%d",p+i++));

    for(int i=0;i<n;i++ ){
        p[i]=p[i]%2==0 ? p[i]*p[i] :p[i] ;
    }

    printf("Updated array elements\n");
    for(int i=0;i<n;printf("%d ",*(p+i++)));





}