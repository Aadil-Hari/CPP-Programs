#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter radius of circle: ";
    const double pi=3.14;
    double radius;
    cin >> radius;
    double area=pi*(pow(radius,2));
    cout << "Area of the circle: " << area;

}