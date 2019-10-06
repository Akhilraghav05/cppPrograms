// #include<iostream>
// using namespace std;
// struct Delete  {
//   int A[10];
//   int length;
//   int size;
// };
// void dispalyArray(struct Delete arr){
//  int i;
//  for(i =0;i<arr.length;i++){
//     cout<<arr.A[i]<<endl;
//  }
// }
// int deleteArray(struct Delete *del,int index){
//     int x;
//     int i;
//     if(index>= 0 && index<del->length){
//         x=del->A[index];
//         for(i=index;i<del->length-1;i++){
//             del->A[i]= del->A[i+1];
//         }
//         del->length--;
//         return x;
//     }
//   return 0;
// }
// int main(){
//     struct Delete del = {{1,2,3,4,5},5,10};
//     cout<<deleteArray(&del,1)<<endl;
//     dispalyArray(del);
//     return 0;
// }

#include<stdio.h>
struct Array
{
int A[10];
int size;
int length;
};
void Display(struct Array arr)
{
int i;
printf("\nElements are\n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}
int Delete(struct Array *arr,int index)
{
int x=0;
int i;
if(index>=0 && index<arr->length)
{
x=arr->A[index];
for(i=index;i<arr->length-1;i++)
arr->A[i]=arr->A[i+1];
arr->length--;
return x;
}
return 0;
}
int main()
{
struct Array arr1={{2,3,4,5,6},10,5};
printf("%d",Delete(&arr1,0));
Display(arr1);
return 0;
}