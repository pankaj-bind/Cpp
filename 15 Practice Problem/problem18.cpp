#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"Find the area of any triangle using Heron's Formula :"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    float a, b, c;
    cout<<"Input the length of 1st side of the triangle : ";cin>>a;
    cout<<"Input the length of 2nd side of the triangle : ";cin>>b;
    cout<<"Input the length of 3rd side of the triangle : ";cin>>c;

    float s = (a+b+c)/2;
    float heronArea = sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"The are of the triangle is : "<<heronArea;
    return 0;
}