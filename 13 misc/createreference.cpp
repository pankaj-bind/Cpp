#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int &number = n;   // number is reference name 
    cout<<&number<<"\n";  // memory adderess
    cout<<number;  
    return 0;
}