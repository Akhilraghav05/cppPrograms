#include<iostream>
using namespace std;
class GeneralException{

};
int mul(int a,int b) {
   if(b ==0)
     throw GeneralException();
   return a/b;
}
int main(){
   int x=9,y=0,z;
   try{
   z = mul(x,y);
   }catch(GeneralException e){
       cout<<"general exception"<<endl;
   }

}