// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// r0 -> 1 char row + 1
// r1 -> 2 char 
// r2 -> 3 char 
// r3 -> 4 char 
// r4 -> 5 char 

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
            cout << col + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}