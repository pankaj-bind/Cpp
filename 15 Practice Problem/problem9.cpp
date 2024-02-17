#include<iostream>
using namespace std;

int main(){
    cout<<"Display the operation of pre and post increment and decrement :"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;

    int i = 57;
    cout<<"The number is : "<<i<<endl;
    cout<<"After post increment by 1 the number is: "<<++i<<endl;
    cout<<"After pre increment by 1 the number is: "<<++i<<endl;
    cout<<"After increasing by 1 the number is : "<<++i<<endl;

    cout<<"After post decrement by 1 the number is: "<<--i<<endl;
    cout<<"After pre decrement by 1 the number is: "<<--i<<endl;
    cout<<"After deccreasing by 1 the number is : "<<--i<<endl;
    cout<<endl;
    return 0;
}