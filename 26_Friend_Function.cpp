#include<iostream>
using namespace std;

class complex{

    int a,b;
    public:
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
    }

    friend complex sum(complex o1, complex o2); // now complier know that it permision is to access private data  (and it is not scope of the class)

    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sum(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b)); // a and b are privite so we can access it 
    return o3;
}
int main(){
    complex c1,c2, sumcomplex;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sumcomplex = sum(c1,c2);
    sumcomplex.printNumber();
    return 0;
}

/* Properties of friend function

--> since it is not in the scope of the class, it cannot be called from the object of the class.  c1.sum() = Invalid
--> can be inovked without the help of any object
--> usually contains the objects as arguments
--> can be declared inside public or private section of the class
--> it cannot access the members directly by their names and need object_name.member_name to access any member

*/