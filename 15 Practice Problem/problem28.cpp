#include<iostream>
#include<cmath> // Include the <cmath> header for sin function
using namespace std;

int main() {
    cout << "Find the area of Scalene Triangle :" << endl;
    cout << "----------------------------------" << endl;

    float side1, side2, angle, area;
    const float PI = 3.14159;
    
    cout << "Input the length of a side of the triangle : ";
    cin >> side1;
    
    cout << "Input the length of another side of the triangle : ";
    cin >> side2; // Fix: Use side2 here instead of side1
    
    cout << "Input the angle between these sides of the triangle : ";
    cin >> angle;

    // Convert angle to radians before using the sin function
    angle = angle * PI / 180.0;

    area = (side1 * side2 * sin(angle)) / 2;
    cout << "The area of the Scalene Triangle is : " << area;

    return 0;
}
