#include<iostream>
using namespace std;

int main(){
    cout<<"Find the area and circumference of any circle : "<<endl;
    cout<<"------------------------------------------------"<<endl;

    float radius, area, circumference;
    const float pi = 3.14;

    cout<<"Input the radius(1/2 of diameter) of a circle : "; cin>>radius;
    area = pi*radius*radius;
    circumference = 2*pi*radius;
    cout<<"The area of the circle is : "<<area<<endl;
    cout<<"The circumference of the circle is : "<<circumference<<endl;
    return 0;
}