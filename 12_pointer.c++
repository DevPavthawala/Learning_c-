#include<iostream>
using namespace std;

int main(){
    // what is a pointer? ----> it is a data type which holds the address of other data type

    int a = 33;
    int* b = &a;   //& address of operator and * is dereference operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;

    cout<<"The value at address b is "<<*b<<endl;

    // pointer to pointer -> stores pointer value
    int** c = &b;

    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<**c<<endl;


    return 0;
}