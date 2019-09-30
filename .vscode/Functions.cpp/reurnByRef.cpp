#include<iostream>
using namespace std;
int &fun(int &a){
    a= 23;
    cout <<a<<endl;
    return a;
}
int main(){
    int x=10;
    fun(x) ;
    cout<<fun(x);
    return 0;
}