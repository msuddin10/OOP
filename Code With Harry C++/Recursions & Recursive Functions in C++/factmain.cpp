#include<iostream>
#include "fact.h"
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int a;
    cin>>a;
    cout<<"The factorial of "<<a<<" is"<<factorial(a);
}