// #include<iostream>
// using namespace std;
// int minMax(a[],*min,*max,len) {
//     *min = *max =a[0];
//     for(int i=1;i<len;i++){
//        if(arr[i]< *min){
//            *min  = arr[i];
//       }
//       if(arr[i]>*max){
//           *max =a[i]
//       }
//     }
//     return 0;
// }
// int main(){
//     int a[]={2,31,47,7,12,1,67,43,23};
//     int min,max,len;
//     len = sizeof(a)/sizeof(a[0]);
//    void minMax(a,&min,&max,len);
//     cout<<"value of min,max :",min,max;
//     return 0;
// }
#include<iostream>
using namespace std;
int max(int a,int b){
    return (a>b) ? a:b;
}
int min(int a,int b){
    return (a>b) ? a:b;
}
int main(){
    int a,b;
    int (*fp)(int ,int);
    fp = max;
    (*fp)(10,5);
    fp = min;
    (*fp)(10,5);
    return 0;
}