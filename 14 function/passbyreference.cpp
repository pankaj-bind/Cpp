#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int z = x;
    x=y;
    y=z;
}

int main(){
    int x = 10;
    int y = 20;
    cout<<"Before swap x="<<x<<" and y="<<y;
    cout<<"\n";
    swap(x,y);
    cout<<"After swap x="<<x<<" and y="<<y;
    return 0;
}