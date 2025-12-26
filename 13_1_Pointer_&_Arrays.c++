#include<iostream>
using namespace std;

int main(){
    int marks[] = {10,20,30,40};
    int* p = marks;
    // as derefrencing the pointer
    // cout<<*(p++)<<endl; // print first and then increment
    // cout<<*(++p)<<endl; // increment first and print

    // cout<<"The value of marks[0] is "<< *p <<endl;
    // cout<<"The value of marks[1] is "<< *(p+1) <<endl;
    // cout<<"The value of marks[2] is "<< *(p+2) <<endl;
    // cout<<"The value of marks[3] is "<< *(p+3) <<endl;
    
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<< *(p) <<endl;
    //     p++;
    // }
    
    for (int i = 0; i < 4; i++)
    {
        if (i == 2)
        {
            marks[i] = 50;
        }
        cout<<"The address of marks "<<i<<" is "<< &(marks[i]) <<" and value is "<<*(p)<<endl;
        p++;
    }

    return 0;
}