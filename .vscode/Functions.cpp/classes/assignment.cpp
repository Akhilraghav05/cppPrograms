#include<iostream>
using namespace std;
class Students{
  public:  int rollNo,Name,m,p,c,TotalMarks;
  public:
  Students(int m,int p,int c);
  int totalMarks(){
     TotalMarks=m+p+c;
     return TotalMarks;
  };
  int grade();
};
int main(){
    Students s(20,30,12);

    return 0;
}
int Students:: grade(){
//   switch (TotalMarks)
//   {
//   case (TotalMarks>60):
//       /* code */
//       break;
  
//   default:
//       break;
//   }  

}