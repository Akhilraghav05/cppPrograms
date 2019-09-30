#include<iostream>
using namespace std;
int fun(int x){
    if(x>0){
        cout<<x<<endl;
        fun(x-1);
        fun(x-1);
    }
  return 0;
}
int main(){
    int n=3,r;
    fun(n);
    return 0;
}