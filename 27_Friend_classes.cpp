#include <iostream>
using namespace std;
// Forward declaration
class complex;

class calculator
{
public:
    int add(int c, int d)
    {
        return c + d;
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // Individually Declaring functions as friends
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2;
    c1.setNumber(1, 6);
    c2.setNumber(3, 5);
    calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    int resComp = calc.sumCompComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 " << res << endl;
    cout << "The sum of imagnary part of c1 and c2 " << resComp << endl;
    int add =calc.add(1,2);
cout<<add<<endl;
    return 0;
}