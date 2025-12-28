#include<iostream>
using namespace std;
 
// Unions are similar to structure but it provide better memory management

union money // here at a time we use only one type of data 
{
    int rice; // if here it take 4 byte space
    char car; // 1
    float pounds; // 4
    // so in structure it uses 9 byte but in union we use only one at a time to it only allocate max space so here 4 byte
};

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';  
    cout<<m1.rice<<endl; // here we can get value of rice as it get overwrite by car so m1.car value we get it correct
    cout<<m1.car<<endl; 
    
    return 0;
}