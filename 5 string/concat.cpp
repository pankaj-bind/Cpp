#include<iostream>
using namespace std;

int main(){
    
    string str1 = "hello";
    string str2 = "world!";

    cout<<str1<<" "<<str2<<endl;
    cout<<str1.append(str2);

    return 0;
}