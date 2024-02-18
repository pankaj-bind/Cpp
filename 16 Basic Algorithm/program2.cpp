#include<iostream>
#include<cmath>
using namespace std;

void solution(int n){
    if(n>51){
        cout<<3*abs(n-51);
    }
    else if(n<=51){
        cout<<abs(n-51);
    }
}
int main(){
    int num;
    cin>>num;
    solution(num);
    return 0;
}