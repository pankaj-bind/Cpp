#include<iostream>
using namespace std;

void solution(string str){
    if(str.length()==1){
        cout<<str;
    }else{
        char first = str[str.length()-1];
        char last = str[0];
        string middle = str.substr(1,str.length()-2);
        cout<<(first+middle+last);
    }
}
int main(){
    string str;
    getline(cin, str);
    solution(str);
    return 0;
}