#include<iostream>
using namespace std;
void funB(int n);
void fun(int n){
    if(n>0){
        cout<<n<<endl;
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        cout<<n<<endl;
        fun(n/2);
    }
}
int main(){
    int a =20;
    fun(a);
    return 0;
}