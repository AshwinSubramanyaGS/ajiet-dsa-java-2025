#include<stdio.h>

int fibb(int );

int main(){
    int n=0;
    scanf("%i",&n);

    printf("the %dth fibb no is %d",n,fibb(n));
    return 0;
}
int fibb(int n){
    if (n<=0)return 0;
    if (n==1)return 1;
    return fibb(n-1)+fibb(n-2);
}