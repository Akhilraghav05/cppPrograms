#include<iostream>
using namespace std;
class rectangle{
 private: int l,b;
 public:
 void setLength(int len){
   if(l>=0){
       l= len;
       cout<<"my length is "<<l;
   }else{
       l=0;
   }
 }
 void setBreadth(int br){
   if(b>=0){
       b= br;
   }else{
       b=0;
   }
 }
 int getLength(){return l;}
 int getBreadth(){return b;}
 int area(){
     return l*b;

 }
 int perimeter(){
     return 2*(l+b);
 }
};
int main(){
    rectangle r;
    r.setLength(10);
    r.setBreadth(-2);
    cout<<r.area()<<endl;
    // r=NULL; //making a pointer refrence null
    // delete r; //deleting a memory from heap
    return 0;
}