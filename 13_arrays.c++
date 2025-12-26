#include<iostream>
using namespace std;

int main(){
    int marks[] = {10,20,30,40};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
 
    // changeing value of arry
    marks[2] = 50;
 
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // printing arry elemets using For loops***************************************
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks using for "<<i<<" is "<<marks[i]<<endl;
    }
    
    // printing arry elemets using Do-While loops**********************************
    int i = 0;
    do
    {
        cout<<"The value of marks using do-while "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    

    return 0;
}