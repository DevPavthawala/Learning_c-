# include<iostream>
# include<iomanip> // for using setw - manipulator
using namespace std;

int main(){
    
    // int a = 34;
    // cout<<"the value of a was: "<<a<<endl;
    // a = 54; // this will overwrite the value of a
    // cout<<"the value of a is: "<<a;

    //*******************Constansts in c++*************************
    
    // const int a = 34; //using const we cant overwrite this will remain constant through out the main function
    // cout<<"the value of a was and not change using const: "<<a<<endl;
    // a = 54; // here it will give error as it become read only variable
    // cout<<"the value of a is: "<<a;
    
    // // ****************Manipulator************
    // int d=3,b=78,c=1233;
    // cout<<"The value of a with setw is:"<<setw(4)<<a<<endl; // gives right justify
    // cout<<"The value of b with setw is:"<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;


    // cout<<"The value of a without setw is:"<<a<<endl;
    // cout<<"The value of b without setw is:"<<b<<endl;
    // cout<<"The value of c without setw is:"<<c<<endl;

    //******************Operator Precedence**********************

    int a = 4, b = 6;
    int c = a*(5 + b); //check Operator Precedence from c++ reference web page
    cout<<c;
    
    return 0;
}

