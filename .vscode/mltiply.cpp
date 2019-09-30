#include<iostream>
using namespace std;
int main(){
    int number,j;
    cout <<"enter n :";
    cin>>number;
    // for(int i=1;i<=10;i++){
    //     int res = number*i;
    //      cout << res << endl;
    // }
    j=1;
    while(j<=10){
      int res =j*number;
      j++;
      cout << res <<endl;
    }
    
    
}