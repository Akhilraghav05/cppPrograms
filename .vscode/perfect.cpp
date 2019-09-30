#include<iostream>
using namespace std;
int main(){
    int n,r,c,res,temp =0,m;
    cout<<"enter a num to find reverse of it:";
    cin>>n;
    m=n;
    cout<<m<<endl;
    // while(n>0){
    //     r = n%10;
    //     n= n/10;
    //     cout<<r;
    // }
    // while(n>0){
    //     r=n%10;
    //     n= n/10;
    //     // c= r*r*r;
    //     temp = temp+(r*r*r);
    //     cout<<temp<<endl;
    // }
    // if(temp == m){
    //     cout<<"perfect number is: " <<temp<<endl;
    // }else{
    //     cout<<"not a armstrong";
    // }
    while(n>0){
        r= n%10;
        n=n/10;
        temp=temp*10+r;
        
    }
        cout<<temp;
    
    return 0;
}