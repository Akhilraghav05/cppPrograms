#include<iostream>
using namespace std;
int main(){
    int i=1,number;
    cout<<"Enter a number to find factors : ";
    cin>>number;
    while(i<=number){
        if(number%i == 0){
            cout<<i;
        }
        i++;
    }
}