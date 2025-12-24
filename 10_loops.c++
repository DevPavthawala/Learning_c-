#include <iostream>
using namespace std;

int main()
{
    // for,while and do while loop

    // For loop in c++**********************************************************************
    // for(initialization, condition,updation) {   body   }

    // for (int i = 0; i <= 100; i++)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // While loop in c++***********************************************************************
    // while (condition){ /* code */ }
    // int a = 1;
    // while (a<=40)
    // {
    //     cout<<a<<endl;
    //     a++;
    // }
    
    // Do While loop in c++*******************************************************************
    // do
    // {
    //     /* code */
    // } while (condition);
    
    int b = 0;
    do
    {
        cout<<b<<endl;
        b++;
    } while (b<40); // if the condtion is false then also it will inceate the code once
    
    
    return 0;
}

