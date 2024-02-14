#include<iostream>
using namespace std;

void name(string name="Pankaj"){
    cout<<name<<"\n";
}
int main(){
    name();  // default parameter prints "pankaj"
    name("Sharavan");
    name("Ram Lakhan");
    name("Jeetu");
    return 0;
}