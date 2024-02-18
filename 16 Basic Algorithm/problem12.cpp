#include<iostream>
using namespace std;

void solution(string str){
    if(str.substr(0,2)=="C#"){
        cout<<true;
    }else{
        cout<<false;
    }
}
int main(){
    string str;
    getline(cin, str);
    solution(str);
    return 0;
}