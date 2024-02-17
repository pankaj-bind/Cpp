#include<iostream>
using namespace std;

int main(){
    cout<<"Convert temperature in Celsius to Fahrenheit :"<<endl;
    cout<<"----------------------------------------------"<<endl;

    float Celsius, Fahrenheit;

    cout<<"Input the temperature in Celsius : ";cin>>Celsius;

    Fahrenheit = ((9*Celsius)/5)+32;
    cout<<"The temperature in Celsius : "<<Celsius<<endl;
    cout<<"The temperature in Fahrenheit : "<<Fahrenheit;
    return 0;
}