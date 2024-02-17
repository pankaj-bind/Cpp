#include<iostream>
using namespace std;

int main(){
    cout<<"Check whether the primitive values crossing the limits or not :"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;

    char gender = 'F';
    bool married = true;
    int numOfSon = 2;
    int appointmentYear = 2009;
    long salary = 1500000;
    float height = 79.48;
    float gpa = 4.69;
    long long salaryDrawn = 12047235;
    long long balance = 995324987;

    cout<<"The Gender is : "<< gender<<endl;
    cout<<"Is she married? : "<< married<<endl;
    cout<<"Number of sons she has : "<< numOfSon<<endl;
    cout<<"Year of her appointment : "<< appointmentYear<<endl;
    cout<<"Salary for a year : "<< salary<<endl;
    cout<<"Height is : "<< height<<endl;
    cout<<"GPA is "<< gpa<<endl;
    cout<<"Salary drawn upto : "<< salaryDrawn<<endl;
    cout<<"Balance till : "<< balance<<endl;
    return 0;
}