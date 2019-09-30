#include<iostream>
using namespace std;
int rec(int n){
    if(n>0){
    // cout<<n<<endl;
      rec(n-1);
      cout<<n<<endl;
    }
    return 0;
}
int main()
{
    int x=3;
    rec(x);
} 

