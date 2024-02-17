#include<iostream>
using namespace std;

int main(){
    cout<<"Calculate the volume of a cylinder : "<<endl;
    cout<<"-----------------------------------"<<endl;

    int radius;
    int height;
    float PI = 3.14;
    cout<<"Input the radius of a cylinder : ";cin>>radius;
    cout<<"Input the height of a cylinder : ";cin>>height;

    float volume = PI*radius*radius*radius*height;

    cout<<"The volume of a cylinder is : "<<volume;
    return 0;
}