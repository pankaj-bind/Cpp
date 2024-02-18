#include<iostream>
using namespace std;

void solution(int num){
    if(num%3==0 || num%7==0){
        cout<<true;
    }else{
        cout<<false;
    }
}
int main(){
    int num;
    cin>>num;
    solution(num);
    return 0;
}