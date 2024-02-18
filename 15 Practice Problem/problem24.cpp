#include<iostream>
using namespace std;

int main(){
    cout<<"Convert temperature in Kelvin to Fahrenheit :"<<endl;
    cout<<"---------------------------------------------"<<endl;

    float Fahrenheit, Kelvin;

    cout<<"Input the temerature in Kelvin : ";cin>>Kelvin;
    cout<<"The temperature in Kelvin : "<<Kelvin<<endl;

    Fahrenheit = ((Kelvin-273.15)*1.8)+32;
    cout<<"The temperature in Fahrenheit : "<<Fahrenheit;
    return 0;
}