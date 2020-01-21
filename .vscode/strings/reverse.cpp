#include<iostream>
using namespace std;
int main(){
    char a[] ="welcome";
    int i,j,b[8];
    for(i=0;a[i]!='\0';i++){}
    i=i-1;
    for(i=0;i>=0;i--,j++){
       b[j] =a[i];
    }
    b[j] ='\0';
    cout<<b<<endl;
} 
