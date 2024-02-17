#include<iostream>
using namespace std;

int main(){
    cout<<"Calculate the volume of a sphere : "<<endl;
    cout<<"-----------------------------------"<<endl;

    int radius;
    float PI = 3.14;
    cout<<"Input the radius of a sphere : ";cin>>radius;

    float volume = (3*PI*radius*radius*radius)/4;

    cout<<"The volume of a sphere is : "<<volume;
    return 0;
}