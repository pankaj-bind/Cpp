#include<iostream>
using namespace std;

int main(){
    cout<<"Calculate the volume of a cube : "<<endl;
    cout<<"-----------------------------------"<<endl;

    int side;
    cout<<"Input the side of a cube : ";cin>>side;

    long volume = side*side*side;

    cout<<"The volume of a cube is : "<<volume;
    return 0;
}