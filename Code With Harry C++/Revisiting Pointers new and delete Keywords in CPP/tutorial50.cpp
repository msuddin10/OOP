#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=4;
    int* ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    float *p=new float(40.78);
    cout<<"The value at address p is "<<*(p)<<endl;
    
    int *arr = new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[3]=30;
    delete[] arr;
    cout<<"The values of arr[0] is "<<arr[0]<<endl;
    cout<<"Thhe value off arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    return 0;
}