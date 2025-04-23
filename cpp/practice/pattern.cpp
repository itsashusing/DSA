#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // ## Square Pattern
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*" << " ";
    //     }

    //     cout << endl;
    // }

    /*
            A B C D
            A B C D
            A B C D
            A B C D
    */
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }

    //     cout << endl;
    // }

    /*
        1 2 3
        4 5 6
        7 8 9
    */
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << ' ';
    //         num++;
    //     }
    //     cout << endl;
    // }

    /*

     *
     * *
     * * *
     * * * *
     * * * * *
     * * * * * *

     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    /*
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5


    */

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1 << " ";
    //     }

    //     cout << endl;
    // }

    return 0;
}