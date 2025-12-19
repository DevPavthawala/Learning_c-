# include<iostream>
using namespace std;

int main()
{
    //**************basic control str******************
    // sequence str
    // selection str
    // loop str    

    // // ***********if-else********************************

    int age;
    cout<<"Tell your age: "<<endl;
    cin>>age;
    // if((age<18)and (age>0)){
    //     cout<<"You are not able to join party"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"you are 18, you can join next year"<<endl;
    // }
    // else if (age<1)
    // {
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"Join party"<<endl;
    

    // *****************switch-case**************************

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
        
    default:
        cout<<"no special case"<<endl;
        break;
    }

    cout<<"Exited switch case"<<endl;
    return 0;
}
