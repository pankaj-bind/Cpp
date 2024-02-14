#include<iostream>
using namespace std;

void myfun(int a, int b){
  cout<<a+b<<"\n";
}

void myfun(double a, double b){
  cout<<a+b<<"\n";
}

void myfun(char a, char b, char c, char d, char e, char f){
  cout<<a<<b<<c<<d<<e<<f<<"\n";
}

void myfun(string a, string b, string c){
  cout<<a+b+c<<"\n";
}

int main(){
    myfun(1,2);
    myfun(1.1, 2.2);
    myfun('P','a','n','k','a','j');
    myfun("Pankaj ", "Kumar ", "Bind");
    return 0;
}