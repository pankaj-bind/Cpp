#include<iostream>
using namespace std;

int main(){
    int a[3]={1, 2, 3};
    float b[3] = {1.1, 2.2, 3.3};
    string s[3] = {"Pankaj", "Kumar", "Bind"};

    for (int i = 0; i < 3; i++)
    {
        cout<<a[i]<<"\n";
    }

    for (int j = 0; j < 3; j++)
    {
        cout<<b[j]<<"\n";
    }
    
    int k=0;
    while(k<3){
        cout<<s[k]<<"\n";
        k++;
    }
    return 0;
}