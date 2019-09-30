#include<iostream>
using namespace std;
class firstClass{
    public: int a;
    void show(){
        cout<<a<<endl;
    }
};
class inherited:public firstClass{
  public: int b;
  void display(){
      cout<<b<<endl;
  }
};
int main(){
    firstClass f;
    f.a= 24;
    inherited I;
    I.b=12;
    I.a=23;
    I.show();
    I.display();
    return 0;
}
//constructors are also inherited
