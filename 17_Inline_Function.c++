#include<iostream>
using namespace std;

// inline funtion reduce overhead sitution for simple task here compiler replace product(a,b) ---> a*b {Not used for bigger function only used for simple function}
inline int product(int a, int b){
    return a*b;
}

// inline function is not used in recursion, static var, loops, switch-case.

int staticproduct(int a, int b){
    static int c = 0; // this line run on first call only (once)
    c = c+1; // here at first c = 1 on first call and incresed by 1 after each call, because value of c will be retained
    return a*b+c;
}

// factor = 1.04 is a default arrgument in case if no arrgument pass it will directelly take value
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}


int main(){
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The static product of (a and b) and increase by 1 due to static is "<<staticproduct(a,b)<<endl;
    // cout<<"The static product of (a and b) and increase by 1 due to static is "<<staticproduct(a,b)<<endl;
    // cout<<"The static product of (a and b) and increase by 1 due to static is "<<staticproduct(a,b)<<endl;
    // cout<<"The static product of (a and b) and increase by 1 due to static is "<<staticproduct(a,b)<<endl;
    // cout<<"The static product of (a and b) and increase by 1 due to static is "<<staticproduct(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money)<<" Rs after 1 year"<<endl; // here it will use default arrgument
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money,1.1)<<" Rs after 1 year"<<endl; // here it will use affgument we tell to use

    return 0;
}