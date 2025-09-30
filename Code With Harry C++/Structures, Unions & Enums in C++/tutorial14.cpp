#include <bits/stdc++.h>
using namespace std;

struct employee{
    int eID;
    char favChar;
    float salary;

};
union money{
    int rice;
    char car;
    float pounds;
};

int main() {
    union money m1;
    m1.rice=34;
    m1.car='c';


    struct employee harry;
    struct employee shubham;
    struct employee rohan;
    harry.eID=1;
    harry.favChar='C';
    harry.salary=120000;
    shubham.eID=2;
    shubham.favChar='A';
    shubham.salary=154000;


    enum Meal{breakfast,lunch,dinner};
    Meal m11=breakfast;

    cout<<"The salary of harry is "<<harry.salary<<endl;
    cout<<"The salary of shubham is "<<shubham.salary<<endl;
    cout<<m1.rice<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<m11<<endl;
    return 0;
}