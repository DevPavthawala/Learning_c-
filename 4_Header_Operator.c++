#include<iostream> //Header file

// There are two types of header files:
// 1. System header files: It comes with the compiler #include<iostream>
// 2. User defined files: It is written by the programmer #include<temp.h>
using namespace std;

int main()
{
    int a = 4, b= 5;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the Operators in c++:"<<endl;  

    // Arithmetic Operators
    cout<<"The value of a + b is " <<a+b<<endl;
    cout<<"The value of a - b is " <<a-b<<endl;
    cout<<"The value of a * b is " <<a*b<<endl;
    cout<<"The value of a / b is " <<a/b<<endl;
    cout<<"The value of a % b is " <<a%b<<endl;
    cout<<"The value of a++   is " <<a++<<endl; // print value of a = 4 and a++ means a = 5
    cout<<"The value of a--   is " <<a--<<endl; // print value of a = 5 and a-- means a = 4
    cout<<"The value of --a   is " <<--a<<endl; // here first it decrease value of a then print means a = 3
    cout<<"The value of ++a   is " <<++a<<endl; // here first it increase value of a then print means a = 4
    cout<<endl;
    cout<<endl;

    // Assignment Operator --> used to assign values to variable Eg. int, char

    // Comparison operators
    cout<<"Following are the Comparison Operators in c++:"<<endl;    
    cout<<"The value of a==b  is " << (a==b)<<endl;
    cout<<"The value of a!=b  is " << (a!=b)<<endl;
    cout<<"The value of a>=b  is " << (a>=b)<<endl;
    cout<<"The value of a<=b  is " << (a<=b)<<endl;
    cout<<"The value of a>b  is " << (a>b)<<endl;
    cout<<"The value of a<b  is " << (a<b)<<endl;
    cout<<endl;
    cout<<endl;

    // Logical operators &&--and , ||-- or, !-- not
    cout<<"Following are the Logical Operators in c++:"<<endl;    
    cout<<"The value of and operator ((a==b) && (a<b)) is " << ((a==b) && (a<b))<<endl;
    cout<<"The value of or operator ((a==b) || (a<b))  is " << ((a==b) || (a<b))<<endl;
    cout<<"The value of not operator (!(a==b))  is " << ((a==b) || (a<b))<<endl;
    
    return 0;
}