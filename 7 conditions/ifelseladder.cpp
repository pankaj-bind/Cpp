#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";cin>>age;

    if((age<18)&&(age>0)){
        cout<<"You are not eligible for voting";
    } else if(age>=10){
        cout<<"You are eligible for voting";
    } else if(age<0){
        cout<<"You are an idiot.";
    } 
    return 0;
}