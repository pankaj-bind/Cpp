#include<iostream>
using namespace std;

int main(){
    cout<<"Convert temperature in Fahrenheit to Celsius :"<<endl;
    cout<<"----------------------------------------------"<<endl;

    float Celsius, Fahrenheit;

    cout<<"Input the temperature in Fahrenheit : ";cin>>Fahrenheit;

    Celsius = ((Fahrenheit-32)*5)/9;
    cout<<"The temperature in Fahrenheit : "<<Fahrenheit<<endl;
    cout<<"The temperature in Celsius : "<<Celsius;
    return 0;
}