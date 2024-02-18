#include<iostream>
using namespace std;

int main(){
    cout<<"Convert temperature in Farenheit to Kelvin :"<<endl;
    cout<<"---------------------------------------------"<<endl;

    float Fahrenheit, Kelvin;

    cout<<"Input the temerature in Fahrenheit : ";cin>>Fahrenheit;
    cout<<"The temperature in Fahrenheit : "<<Fahrenheit<<endl;

    Kelvin = ((5*(Fahrenheit-32))/9)+273.15;
    cout<<"The temperature in Kelvin : "<<Kelvin;
    return 0;
}