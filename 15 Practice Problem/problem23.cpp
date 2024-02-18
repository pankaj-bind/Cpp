#include<iostream>
using namespace std;

int main(){
    cout<<"Convert kilometers per hour to miles per hour :"<<endl;
    cout<<"-----------------------------------------------"<<endl;

    float kmph, mph;
    cout<<"Input the distance in kilometer : ";cin>>kmph;
    cout<<"The "<<kmph<<" Km./hr. means "<<(kmph/1.60934)<<" Miles/hr."<<endl;
    return 0;
}