#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "Enter min and max values: ";
    int MinValue;
    int MaxValue;
    cin >> MinValue >> MaxValue;
    srand(time(0));
    int number=(rand()%(MaxValue-MinValue+1))+MinValue;
    cout << number;
}