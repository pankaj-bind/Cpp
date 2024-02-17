#include<iostream>
using namespace std;

int main(){
    int num1, num2, temp;
    cout<<"Swap two numbers : "<<endl;
    cout<<"-------------------"<<endl;

    cout<<"Input 1st number : ";cin>>num1;
    cout<<"Input 2nd number : ";cin>>num2;

    temp = num2;
    num2 = num1;
    num1 = temp;

    cout<<"After swapping the 1st number is : "<<num1<<endl;
    cout<<"After swapping the 2nd number is : "<<num2<<endl;
    return 0;
}