#include<iostream>
using namespace std;

// imporve readability nothing else 
int main(){
    enum Meal{breakfast, lunch, dinner};  // have values{0,1,2}
    Meal m1 = breakfast;
    cout<<(m1==2); // print 0 for false 1 for true
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    return 0;
}