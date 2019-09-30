#include<iostream>
using namespace std;
int main(){
    int a[] ={2,4,5,6,9,12,34,67,90},key,l,h,mid;
    cout<<"enter a key";
    cin>>key;
    while(l<=h){
        mid =(l+h)/2;
      if(key == mid){
          cout<<"key found"<<mid;
          return 0;
      }else if(key<mid){
       h = mid -1;
      }else{
          l =mid+1;
      }
    }
    // cout<<"key not found";
}
