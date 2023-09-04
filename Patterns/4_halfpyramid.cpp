// *
// * *
// * * *
// * * * *
// * * * * *

// r0 -> 1* row + 1
// r1 -> 2*
// r2 -> 3*
// r3 -> 4*
// r4 -> 5*

#include <iostream>
using namespace std;
int main()
{

    int rowCount, colCount;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}