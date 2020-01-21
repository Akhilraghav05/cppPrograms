#include<iostream>
using namespace std;
class base {
  public:
    virtual void show(){
      cout<<"In base"<<endl;
   }
};
class dervived:public base {
   public:
     void show(){
        cout<<"hi"<<endl;
     }
};
int main(){
   base *bp = new dervived;
   bp->show();
}