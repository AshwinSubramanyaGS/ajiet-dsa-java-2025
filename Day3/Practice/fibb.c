#include<stdio.h>
int rec_fibb(int n,int f1,int f2){
    
    if(n<=1) return f1;
    if(n==2) return f2;
    
    return rec_fibb(n-1,f2,f1+f2);

}
int main(){

    int f1=0,f2=1,f3,n;

    scanf("%d",&n);

    /* for(int i=0;i<n;i++){
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    } */
    printf("%d ",rec_fibb(n,0,1));
}