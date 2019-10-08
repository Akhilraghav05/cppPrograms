#include<iostream>
using namespace std;
int rec(int n){
   if(n == 0) return 1;
   else{
      return  rec(rec(n-1));
   }
}
int main(){
   int r;
    r =rec(6);
    cout<<r<<endl;
    return 0;
}