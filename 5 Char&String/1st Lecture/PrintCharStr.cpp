#include <iostream>
#include <vector>
using namespace std;


//How to print char

int main()
{
    //1 TYPE
    char nam[100];
    cin >> nam;

    for (int i = 0; i < 10; i++)
    {
        cout << nam[i] << " ";
    }


       //2 TYPE
    char ch[100];
    ch[0] = 'a';
    ch[1] = 'b';
    cin >> ch[2];

    cout << ch[0] << ch[1] << ch[2];





    //3 Type
   
    char nam[100];
    cin >> nam;                                      // Space Tab Enter not work 

    for (int i = 0; i < 10; i++)
    {
        cout <<i<<" "<< nam[i] << " ";
        cout<<endl;
    }
    

      //4 Type
    char nam[100];

    cin.getline(nam,100);               // Input : Deepanshu is a good boy
                                        // OutPut: Deepanshu is a good boy
    cout<<nam;
}
