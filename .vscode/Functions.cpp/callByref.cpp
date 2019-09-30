#include<iostream>
using namespace std;
void swap(int a,int b){
   int temp;
   temp = a;
   a=b;
   temp = b;
}
int main(){
    int c;
    swap(12,32);
    return 0;
}