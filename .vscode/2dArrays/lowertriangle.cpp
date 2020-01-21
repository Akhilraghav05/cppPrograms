#include<iostream>
using namespace std;
class LowerTri{
  private:
  int *A;
  int n;
  public:
  LowerTri(){ //non-parameterized
   n=2;
   A = new int[2*(2+1)/2];
  }
  LowerTri(int n){ //parameterized const
    this->n =n;
    A =new int[n*(n+1)/2];
  }
  ~LowerTri(){
      delete []A;
  }
  void set(int i,int j,int k);
  int get(int i,int j);
  void display();
};
void LowerTri::set(int i,int j,int k){
    if(i >= j)
    A[i*(i-1)/2+j-1]=k;    
    }
int LowerTri::get(int i,int j){
    if(i>=j)
      return A[i*(i-1)/2+j-1];      
    return 0;
}
void LowerTri::display (){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i>=j)
                cout<<A[i*(i-1)/2+j-1]<<" ";
                else
                {
                   cout<<"0 ";
                }
                
             cout<<endl;
            
        }
    }
}
int main(){
    int d;
    cout<<"Enter dimensions";
   cin>>d;
   LowerTri lm(d);
   int x;
   cout<<"Enter all elements";
   for(int i =0;i<=d;i++){
     for(int j=0;j<=d;j++){
         cin>>x;
         lm.set(i,j,x);
     }
   }
   lm.display();
}