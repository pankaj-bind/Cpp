#include<iostream>
using namespace std;

void solution(string str, int index){
    for(int i=0; i<str.length(); i++){
        if(i==index){
            continue;
        }else{
            cout<<str[i];
        }
    }
}
int main(){
    string str;
    int index;
    getline(cin, str);
    cin>>index;
    solution(str, index);
    return 0;
}