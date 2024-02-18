#include<iostream>
using namespace std;

bool solution(int num1, int num2){
    if(num1==30 || num2==30 || (num1+num2)==30){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num1, num2;
    cin>>num1;
    cin>>num2;
    cout<<solution(num1,num2);
    return 0;
}