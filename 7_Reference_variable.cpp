#include<iostream>
using namespace std;

int c = 45; //global variable

int main()
{
    // **********Built in data types******************
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;

    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The global c is: "<<::c; // :: ---> is reference variable which call global

    // ***************Literals**************************

    // here in c++ default 34.4 value is taken as double so write f in end for float and l for long double (small and capital)
    // float d = 34.5f;
    // long double e = 34.5l;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // cout<<"The size of 34.5 is "<<sizeof(34.5)<<endl;
    // cout<<"The size of 34.5f is "<<sizeof(34.5f)<<endl;
    // cout<<"The size of 34.5l is "<<sizeof(34.5l)<<endl;


    // ****************Reference variable************************

    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // ****************Type casting************************

    int r = 45;
    float s = 45.25;

    cout<<"The value of r: "<<r<<endl;
    cout<<"The value of s: "<<int(s)<<endl;
    cout<<"The value of s: "<<(int)s<<endl;
    cout<<"The sum is :"<<r+s<<endl;

    s = int(s);
    cout<<"The sum is :"<<r+s<<endl;


    return 0;
}
