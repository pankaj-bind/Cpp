#include<iostream>
using namespace std;

void solution(int temp1, int temp2){
    if(temp1>100 && temp2<0){
        cout<<true;
    }else if(temp1<0 && temp2>100){
        cout<<true;
    }else{
        cout<<false;
    }
}
int main(){
    int temp1, temp2;
    cin>>temp1;
    cin>>temp2;
    solution(temp1, temp2);
    return 0;
}