#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
  while(start<end){
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] =temp;
      start++;
      end--;
  }
  
}
void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
  
   cout << endl; 
} 
int main(){
  int arr[] = {1,2,3,4,6,5};
  int size = sizeof(arr)/sizeof(arr[0]);
   
  printArray(arr,size);
  reverse(arr,0,size-1);
  printArray(arr,size);
   return 0;
}