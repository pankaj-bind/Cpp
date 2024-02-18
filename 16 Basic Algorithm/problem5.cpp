#include<iostream>
using namespace std;

void solution(string str){
    if(str[0]=='i' && str[1]=='f'){
        cout<<str;
    }else{
        cout<<"if "+str;
    }
}
int main(){
    string str;
    getline(cin, str);
    solution(str);
    return 0;
}