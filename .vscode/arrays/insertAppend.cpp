#include<iostream>
using namespace std;
struct Array
{
    int a[10];
    int size; //limit of array
    int length; //no of elements in array
};
void display(struct Array arr){
  int i;
  cout<<"Entered elements are :"<<endl;
  for(i=0;i<arr.length;i++)
  cout<<arr.a[i]<<endl;

}
void append(struct Array *arr,int x){
    if(arr->length<arr->size){ //so we are checking size of original array that should be less than added element
        arr->a[arr->length++] =x;//increment length
    }
}
void insert(struct Array *arr ,int index,int y){
    if(index >=0 && index<=arr->length){
  for(int i=arr->length;i>index;i--){
      arr->a[i] = arr->a[i-1];
  }//an empty space will appear
  arr->a[index] = y;
  arr->length++;
    }
}
int main(){
    struct Array arr = {{2,3,5,7,8},10,5};
    // append(&arr,20);
    insert(&arr,10,15);
    display(arr);
    return 0;
    
}