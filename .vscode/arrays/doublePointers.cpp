#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[3][4] ={{1,2,3,4},{4,5,6,4},{7,8,9,6}};
    int *b[3]; //rows are created in stack
    int **c;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d",A[i][j]);
            printf("\n");
        }
    }
    // b[0]=new int(4); cpp method
    //columns are created in heap
    b[0] =(int *)(malloc)(4*sizeof(int));
    b[1] =(int *)(malloc)(4*sizeof(int));
    b[2] =(int *)(malloc)(4*sizeof(int));
    //rows are created in heap
    c  = (int **)(malloc)(3*sizeof(int *));
    //columns are created in heap
    c[0]= (int *)(malloc)(4*sizeof(int));
    c[1] = (int *)malloc(4*sizeof(int));
     c[2] = (int *)malloc(4*sizeof(int));

}