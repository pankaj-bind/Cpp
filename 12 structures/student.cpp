#include<iostream>
using namespace std;

struct{
    int rollnum;
    string name;
    long long int phone;
}student1, student2;

int main(){
    student1.name = "Pankaj Bind";
    student1.rollnum = 213456;
    student1.phone = 9506608157;

    student2.name = "Neeraj Bind";
    student2.rollnum = 213455;
    student2.phone = 9506608150;

    cout<<"Details of student 1\n"<<student1.name<<"\n"<<student1.rollnum<<"\n"<<student1.phone<<"\n";
    cout<<"Details of student 2\n"<<student2.name<<"\n"<<student2.rollnum<<"\n"<<student2.phone<<"\n";
    return 0;
}