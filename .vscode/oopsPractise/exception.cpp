#include <iostream>
using namespace  std;
int division(int a,int b){
    if(b ==0)
    throw string("your method is wrong");
  return a/b;
}
int main()
{
    int x=10,y=0,z;
    try{
       z = division(x,y);
    }catch(string e){
        cout<<e<<endl;
    }
} 
