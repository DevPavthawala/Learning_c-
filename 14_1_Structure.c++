#include<iostream>
using namespace std;

// use to store mult-variable with different datatypes

typedef struct employee // typedef means below calling struct employee now we can call by "ep" or whatever we give the name
{
    int eID;
    char favchar;
    float salary;
}ep; // ----------------------given name here---------------------------------------------------

int main(){
    struct employee harry;
    struct employee Dev;
    ep Manav;  // ***********************example of typedef and above is the struct employee*************

    harry.eID =1;
    Dev.eID = 2;
    Manav.eID = 10;

    harry.favchar = 'c';
    Dev.favchar = 'A';

    harry.salary = 100000;
    Dev.salary = 100000000000000000;
    
    cout<<"The value is "<<harry.salary<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.eID<<endl;

    cout<<"The value is "<<Dev.salary<<endl;
    cout<<"The value is "<<Dev.favchar<<endl;
    cout<<"The value is "<<Dev.eID<<endl;
    cout<<"The value is "<<Manav.eID<<endl;

    return 0;
}