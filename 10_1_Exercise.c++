// writing 6 table using loop

#include<iostream>
using namespace std;

int main()
{
    // 6 table*****************************************

    // for (int i = 1; i < 11; i++)
    // {
    //     cout<<"6 x "<<i<<" = "<<6*i<<endl;
    // }

    // taking user input and printing table****************
    
    int a;
    cout<<"Enter the no. for table:  "<<endl;
    cin >> a;
    for (int i=1; i < 11; i++)
    {
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}

