// OOps - classes and objects

    // class --> extension of structures (in c)
    // structures had limitations
    // --> members are public
    // --> No methords
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private or public
    // Structures in c++ are typedefed
    // you can declare object along with the class declartion like this:
    /* class Employee{
        // Class defination
    } harry,dev,manav,neel;
    */

    // harry.salary = 8 makes no sense if salary is private


#include <iostream>
#include <string>
using namespace std;

class binary
{
    //by default private inside class
    string s;
    void chk_bin(void);

public:
    void read(void);
    // void chk_bin(void);
    void ones_compliment(void);
    void display(void);

};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i =0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void){
    chk_bin();
    for (int i =0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    for (int i =0; i < s.length(); i++){
        cout<<s.at(i);
    }
}
int main()
{
    // Nesting of member functions

    binary b;
    b.read();
    // b.chk_bin();
    // b.chk_bin(); // nested in onces compliment
    // b.display();
    b.ones_compliment();
    b.display();
    return 0;
}