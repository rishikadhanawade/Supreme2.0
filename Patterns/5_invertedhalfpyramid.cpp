// * * * * *
// * * * *
// * * *
// * *
// *

// n = 5
// r0 -> 5* n -row
// r1 -> 4*
// r2 -> 3*
// r3 -> 2*
// r4 -> 1*

#include <iostream>
using namespace std;
int main()
{

    int rowCount, colCount;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}