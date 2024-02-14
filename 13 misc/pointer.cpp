#include <iostream>
using namespace std;

int main()
{
    string name = "Pankaj";
    string *ptr = &name;
    // A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.
    cout << &name << "\n";
    cout << ptr;
    return 0;
}