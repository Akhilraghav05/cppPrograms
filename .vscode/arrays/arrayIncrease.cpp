#include<iostream>
using namespace  std;
int main()
{
    int a [5] = {1,2,3,4,5};
    int *p = new int[5] ;
    int *q =new int[10];
    p[0]=1,p[1]=3,p[2]=5,p[3]=6,p[4]=7,p[5]=9;
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;
   p=q;
   q=NULL;
   for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    
} 

