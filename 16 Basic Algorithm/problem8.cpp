#include<iostream>
using namespace std;

void solution(string str){
    if(str.length()<2){
        cout<<str;
    }else{
        string s = str.substr(0,2);
        cout<<s+s+s;
    }
}
int main(){
    string str;
    getline(cin, str);
    solution(str);
    return 0;
}