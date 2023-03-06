#include <iostream>
#include <string> //Include this
using namespace std;

int main()
{
    string str;

    // cin >> str;
    // Deepanshu Singh
    // Deepanshu

    getline(cin, str);
    // Deepanshu Singh
    // Deepanshu Singh

    cout << str << endl;

    cout << str.length() << endl;
    cout << str.empty();

    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.substr(1, 3) << endl;
    cout << str << endl;
}