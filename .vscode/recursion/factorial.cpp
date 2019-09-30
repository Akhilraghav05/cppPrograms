#include<iostream>
using namespace std;
int fact(unsigned int n){
  if(n == 0 || n == 1) return 1;
  return fact(n-1)*n;
}
int main(){
    int r,i;
    cout<<"Enter a number "<<endl;
    cin>>i;
    r =fact(i);
    cout<<r<<endl;
 
}