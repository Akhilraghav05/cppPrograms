#include<iostream>
using namespace std;
int sumofN(int n){
    if(n== 0) return 0;
    return sumofN(n-1)+n;
}
int main(){
    int r ;
    r = sumofN(8);
    cout<<r<<endl;
    return 0;
}