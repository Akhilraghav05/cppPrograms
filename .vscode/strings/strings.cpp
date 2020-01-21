#include<iostream>
using namespace std;
int main(){
    char c[] ="WELCome";
     for(int i=0;c[i]!='\0';i++){
         if(c[i]>=65 && c[i]<=90){
             c[i] =c[i]+32;
         }else if(c[i]>=97 && c[i]<=122){
            c[i] = c[i]-32;
         }
     }
     cout<<c<<endl;
     return 0; 
}
