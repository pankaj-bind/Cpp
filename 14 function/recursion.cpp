#include<iostream>
using namespace std;

int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
 
int main(){
    int x = 5;
    cout<<fact(x);
    return 0;
}