#include<iostream>
using namespace std;

struct geeks{
    int id;
    string name;
    long long int phone;
    string city;
    string state;
    string country;
};

int main(){

    geeks geek1;

    cin>>geek1.id;
    cin>>geek1.name;
    cin>>geek1.phone;
    cin>>geek1.city;
    cin>>geek1.state;
    cin>>geek1.country;
    cout<<"\n";
    cout<<geek1.id<<"\n";
    cout<<geek1.name<<"\n";
    cout<<geek1.phone<<"\n";
    cout<<geek1.city<<"\n";
    cout<<geek1.state<<"\n";
    cout<<geek1.country<<"\n";
    return 0;
}