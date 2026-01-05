#include<iostream>
using namespace std;

// here we can use same name and compiler decide based on the input which function to used
int add(int a, int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b;
}
int add(int a, int b,int c){
    cout<<"Using function with three arguments"<<endl;
    return a+b+c;
}

//calculate the volume of cylinder 
float volume(double r, int h){
    return (3.14 * r * r *h);
}
// calculate the volume of cube
int volume(int a){
    return (a*a*a);
}

// rectange box
int volume(int l, int b,int h){
    return (l * b *h);
}
int main(){
    cout<<"The sum is "<<add(4,5)<<endl;
    cout<<"The sum is "<<add(4,5,8)<<endl;
    cout<<"The volume of cylinder is "<<volume(4,10)<<endl;
    cout<<"The volume of cuble is "<<volume(4)<<endl;
    cout<<"The volume of rectangle is "<<volume(4,10,3)<<endl;
    return 0;
}