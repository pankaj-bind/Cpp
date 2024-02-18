#include<iostream>
using namespace std;

void solution(string str){
    if(str.length()>=3){
        cout<<str.substr(0,3)+str+str.substr(0,3);
    }else if(str.length()<=2){
        cout<<str+str+str;
    }
}
int main(){
    string str;
    getline(cin, str);
    solution(str);
    return 0;
}