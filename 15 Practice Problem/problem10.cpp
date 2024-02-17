#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Formatting the output :"<<endl;
    cout<<"-----------------------"<<endl;

    double pi = 3.141559265;
    cout<<fixed<<setprecision(4);
    cout<<"The value of pi : "<<pi<<endl;

    cout << " The value of pi 4 decimal place of total width 8 : |"<<setw(8)<<pi<<"|"<<endl;
    cout << " The value of pi 4 decimal place of total width 10 : |"<<setw(10)<<pi<<"|"<<endl;

    cout<<setfill('-');
    cout << " The value of pi 4 decimal place of total width 8 : |"<<setw(8)<<pi<<"|"<<endl;
    cout << " The value of pi 4 decimal place of total width 10 : |"<<setw(10)<<pi<<"|"<<endl;

    cout<<scientific;
    cout<<"The value of pi in scientific format is : "<<pi<<endl;

    bool sc = true;
    cout<<"Status in number : "<<sc<<endl;

    cout<<boolalpha;
    cout<<"Status is alphabet : "<<sc<<endl;

    cout<<endl;
    return 0;
}