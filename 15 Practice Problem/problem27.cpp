#include<iostream>
using namespace std;

int main(){
    cout<<"Convert temperature in Celsius to Kelvin :"<<endl;
    cout<<"---------------------------------------------"<<endl;

    float Celsius, Kelvin;

    cout<<"Input the temerature in Celsius : ";cin>>Celsius;
    cout<<"The temperature in Celsius : "<<Celsius<<endl;

    Kelvin = Celsius+273.15;
    cout<<"The temperature in Kelvin : "<<Kelvin;
    return 0;
}