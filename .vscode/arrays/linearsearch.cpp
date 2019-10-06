#include<iostream>
using namespace std;
struct Array
{
   int A[10];
   int size;
   int length;
};
void display(struct Array arr){
  for(int i=0;i<arr.length;i++){
      cout<<arr.A[i];
  }
}
void swap(int *x,int*y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;

}
int searchArray(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i])
        swap(&arr->A[i],&arr->A[i-1]);
        return i;
    }
  return -1;
}
int main(){
    struct Array arr = {{1,2,3,4,5,6,7,8,9},10,9};
    cout<<searchArray(&arr,8)<<endl;
    // display(arr);
    return 0;
}