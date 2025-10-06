#include<iostream>
using namespace std;

int a=100; //global variable
void demo(){
    extern int a; //cant be initialized
    a=200;//changes the value of global variable
    int num =10; //local variable
    cout<<"the value of a in demo()= "<<a<<endl;

}
int main(){
    demo();
    cout<<"the value of a in main()=  "<<a<<endl;

    return 0;
}