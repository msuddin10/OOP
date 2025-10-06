#include<iostream>
using namespace std;

void count(){
    static int num =0; //static works like a global variable
    num++;
    cout<<num<<endl;
}

int main(){
    count(); //1-> without static
    count(); //1-> without static
    count();
    count(); //1 -> without static
    
    return 0;
}