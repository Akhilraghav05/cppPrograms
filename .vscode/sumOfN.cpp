// #include<iostream>
// using namespace std;
// int main(){
//     int number,sum=1,i=1;
//     cout<<"enter a number :";
//     cin>>number;

//     // int res = (number*(number+1))/2;
//     // cout<<res<<endl;
//     // return 0;
//     // for(int i=0;i<number;i++){
//     //       sum = sum+i;
//     //    cout<<sum<<endl;
//     // }
//     //factorial of number
//      while(i<=number){
//          sum *= i; // sum =sum*i;
//         ++i;
              
//          }
//      cout<<number<<endl;
//      return 0;
// }
#include <iostream>
using namespace std;
int main() 
{
    int number, i = 1, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> number;
    
    while ( i <= number) {
        factorial *= i;      //factorial = factorial * i;
        i++;
    }
    cout<<"Factorial of "<< number <<" = "<< factorial;
    return 0;
}