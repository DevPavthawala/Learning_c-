#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){
    int temp = a; // temp = 4, a = 4, b = 5
    a = b;              // 4      5      5
    b = temp;              // 4      5      4
    cout<<"the a "<<a<<"The b "<<b; // here if we dont print it will swap value but not give output as it destory it after execution of the funtion
}

// Swap Pointer (call by refrence using pointer)
void swappointer(int* a, int* b){
    int temp = *a; // temp = 4, a = 4, b = 5
    *a = *b;              // 4      5      5
    *b = temp;              // 4      5      4
    // cout<<a<<" and "<<b<<endl;
    // Here it will cange because we are called by the address of the variable.
}
// call by referencee using c++ reference variables
void swapRefVar(int &a, int &b){
    int temp = a; 
    a = b;              
    b = temp;  
    cout<<a<<" and "<<b<<endl;

   
}
int main(){
    int a = 4 ,b = 5, c = 10;
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    // swap(a,b); // This will not swap a and b as it send copy of a and b not change the actual value
    swappointer(&a, &b); // This will SWAP a and b using pointers change by adderess 
    swapRefVar(a, b); // This will SWAP a and b using reference variable
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;

    cout<<"The sum of 4 and 5 is "<<sum(c,b);
    return 0;
}