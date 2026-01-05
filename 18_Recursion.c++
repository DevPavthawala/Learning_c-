#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
// how above funtion works
// factorial(4) = 4 * factorial(4-1)
// factorial(4-1) = 3 * factorial(3-1)
// factorial(3-1) = 2 * factorial(2-1)
// factorial(2-1) = 1 (goes in if loop)

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// Here in recursion some problem become overhead as here fib(3) and fib(2) occuring simuntainlly as it increase load so sometime it would be better to used iterative methord
// fib(5)
// fib(3) + fib(4)
// fib(1) + fib(2) + fib(2) + fib(3)
int main(){
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    // cout<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at postion "<<a<< " is "<<fib(a)<<endl;


    return 0;
}