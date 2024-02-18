#include<iostream>
using namespace std;

int main(){
    cout<<"Convert temperature in Kelvin to Celsius :"<<endl;
    cout<<"---------------------------------------------"<<endl;

    float Celsius, Kelvin;

    cout<<"Input the temerature in Kelvin : ";cin>>Kelvin;
    cout<<"The temperature in Kelvin : "<<Kelvin<<endl;

    Celsius = Kelvin-273.15;
    cout<<"The temperature in Celsius : "<<Celsius;
    return 0;
}