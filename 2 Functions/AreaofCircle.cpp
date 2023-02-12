#include <iostream>
using namespace std;

// function
float CircleArea(float radius)
{
    float area = 3.14 * radius * radius ;
    return area;
}

// main function
int main()
{

    float radius;
    cin >> radius;
    float AreaPrint = CircleArea(radius); // function calling here
    cout << AreaPrint;
}