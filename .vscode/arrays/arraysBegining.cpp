#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5]={1,2,3,4,5};
    int *p;
    p =(int *)malloc(5*sizeof(int));
    p[0]= 6;
    printf("%d",p[0]); 
}