#include<iostream>
using namespace std;

// this is a sum function which can be used multiple times
int sum(int a, int b){
    int c = a+b;
    return c;
}

// Function Prototype
// type function-name (arguments);

// float multiply(float a, float b); // -----> Acceptable
// float multiply(float a, b); // Not acceptable
float multiply(float , float ); // Acceptable
void p(); // Acceptable
// void p(void); // Acceptable

int main(){
    int num1, num2;
    cout<<"Enter First no. "<<endl;
    cin>>num1;
    cout<<"Enter Second no. "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"Sum is "<<sum(num1,num2)<<endl;
    cout<<"Product is "<<multiply(num1,num2)<<endl;
    p();

    return 0;
}

// Here the function is writen below the main function so without function prototyping it will not execute

float multiply(float a,float b){
    // Formal parameters a and b will be taking values from actual paramerer num1 and num2
    float c = a*b;
    return c;
}

void p(){
    cout<<"Hello, Good Morning";
}