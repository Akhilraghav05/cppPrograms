#include <iostream>
using namespace std;
int main(){
    int i,j,count=1;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<count++<<' ' ;
    //     }

    // cout<<endl;
    // }
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            if(i>j){
                cout<<" ";
            }else
             cout<< " * ";
            
        }
       cout<<endl;
    }
}