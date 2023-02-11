#include <iostream>
using namespace std;

// function
char grade(int marks)
{
    if (marks >= 90)
        return 'A';

    else if (marks >= 80)
        return 'B';

    else if (marks >= 70)
        return 'C';

    else if (marks >= 60)
        return 'D';

    else
        return'E';
}

// main function
int main()
{

    int marks;
    cin >> marks;
    char GradeALL = grade(marks); // function calling here
    cout << GradeALL;

    return 0;
}
