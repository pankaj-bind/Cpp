#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;

    cout<<(x&&y)<<"\n";
    cout<<(x||y)<<"\n";
    cout<<!(x&&y)<<"\n";
    cout<<!(x||y)<<"\n";
    return 0;
}