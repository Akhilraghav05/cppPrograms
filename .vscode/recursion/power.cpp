#include<iostream>
using namespace std;
int power(int n,int m){
    if(m == 0){return 1;}
    if(m%2==0) return power(n*n,m/2);
    else return n*power(n*n,(m-1)/2);
}
int main(){
    int r;
    r = power(2,5);
    cout<<r<<endl;
    return 0;
}