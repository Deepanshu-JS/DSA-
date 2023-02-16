#include <iostream>
using namespace std;

// function
float MilesKM(int KM)
{
    float Miles = (1/1.609)*KM;
    return Miles;
}

// main function
int main()
{

    int KM;
    cin >> KM;
    float KMPrint = MilesKM(KM); // function calling here
    cout << KMPrint;
}