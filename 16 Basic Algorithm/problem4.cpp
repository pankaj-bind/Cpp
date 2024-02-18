#include<iostream>
#include<cmath>
using namespace std;

void solution(int n){
    if(abs(n-100)<=10 || abs(n-200)<=10){
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