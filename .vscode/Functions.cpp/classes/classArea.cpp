#include<iostream>
using namespace std;
class  maths {
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
  maths r1,r2;
  r1.length = 10;
  r1.breadth = 20;
  cout <<r1.area()<<endl;
  
return 0;
}
