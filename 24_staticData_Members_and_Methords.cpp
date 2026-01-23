#include <iostream>
using namespace std;

class Employee
{
    static int count; // by default initilize by zero
    // int count = 0;
    int Id;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << Id << " and this is employee no. " << count << endl;
    }

    // static function to access only static member and variable and have access only to static variable 
    static void getcount(void){
        // cout<<Id; // Throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};
// start with thousand form here not from the class (it will give error if we declare in class)
// int Employee ::count = 1000; // create to store
int Employee ::count ;

int main()
{
    Employee dev, manav, neel; // this 3 are sharing same count variable and access them
    // dev.Id = 1; // cannot do this as id and count are private
    // dev.count = 1;

    dev.setData();
    dev.getData();
    Employee :: getcount();

    manav.setData();
    manav.getData();
    Employee :: getcount();

    neel.setData();
    neel.getData();
    Employee :: getcount();

    return 0;
}