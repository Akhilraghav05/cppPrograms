#include<iostream>
using namespace std;
struct Array {
    int A[10];
    int size;
    int length;
};
void DisplayArr(struct Array arr) {
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
   
}
void InsertSort(struct Array *arr ,int x){
  int i =arr->length-1;
  cout<<i<<endl;
  if(arr->length == arr->size) return;
  while(i>=0 && i>=x){
      arr->A[i+1]= arr->A[i];
      i--;
  }
  arr->A[i+1] =x;
  arr->length++;
  
}
int isSorted(struct Array arr){
  for(int i=0;i<arr.length-1;i++){
      if(arr.A[i]>arr.A[i+1]){
          return 0;
      }
      return 1;
  }
  return 0;
};
int Rearrange(struct Array *arr){
   int i,j;
   i=0;
   j=arr->length-1;
   while(i<j){
     while(arr->A[i]<0)i++;
     while(arr->A[j]>=0)j--;
     if(i<j){
        //  swap(&arr->A[i],&arr->A[j]);
     }
   }
    return 0;
}
int main(){
    struct  Array arr = {{1,2,3,6,7},10,6};
    InsertSort(&arr,9);
    cout<<isSorted(arr)<<endl;
    DisplayArr(arr);

}