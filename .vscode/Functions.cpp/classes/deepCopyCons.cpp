// #include<iostream>
// using namespace std;
// class constr {
//  public: 
//  int a,x;
//  int *p;
//  int test(int a){
//    a=x;
//   p= new int[a];
//  }
//  int test(constr &t){
//      a= t.a;
//      p = new int[a];
//  }
// };
// int main(){
//    constr t(5);
//    return 0;
// }
#include<iostream>
using namespace std;
class Rectangle {
   private :
   int length,breadth;
   public:
   Rectangle(){ 
       length=1;
       breadth= 1;
   }
   Rectangle(int l,int b)
   {
      setLength(l);
      setBreadth(b);
   }
   Rectangle(Rectangle &r)
   {
     length = r.length;
     breadth = r.breadth;
   }
   public:
   void setLength(int l){
       if(length >=0){
           length = l;
       }else{
           length =0;
       }
   }
       void setBreadth(int b) {
       if(breadth>=0){
           breadth = b;
       }else{
           breadth =0;
       }
   }
   int getLength(){
       return length;
   }
   int getBreadth(){
       return breadth;
   }
    int area(){
        // cout<<"Area"<<endl;
     return length*breadth;

 }
 int perimeter(){
     return 2*(length+breadth);
 }
};
int main(){
    Rectangle r;
    Rectangle r2(r);
    // r.setLength(10);
    // r.setBreadth(10);
    cout<<r2.perimeter()<<endl; //refrenece copy
    return 0;
}