#include<iostream>
using namespace std;

void solution(string str){
    char c = str[str.length()-1];
    cout<<c+str+c;
}
int main(){
    string str;
    getline(cin, str);
    solution(str);
    return 0;
}