#include<iostream>
using namespace std;
int main(){
    char A[] ="How are you";
    int i,vcount = 0,ccount=0;
    for(i=0;A[i] !='\0';i++){
      if(A[i]=='a' ||A[i]=='e'||A[i]=='o'|| A[i]=='i'|| A[i]=='u'||A[i]=='A' ||A[i]=='E'||A[i]=='O'||A[i]=='I'|| A[i]=='U' ){
        vcount+=1;
      }
      else if((A[i]>=65 && A[i]<=90 )|| (A[i]>=97 && A[i]<=122)){
          ccount++;
      }
    }
    cout<<vcount<<" "<<ccount<<endl;
    char b[]= "python";
    int size = sizeof(b)/sizeof(b[0]);
    cout<<size<<endl;
    char c[size];
    // for(int i=size-1;b[i]!='\0';i++){
      
    // }
}