// *
// * *
// * * *
// * * * *
// * * * * *

#include <iostream>
using namespace std;
int main()
{

    int rowCount, colCount;
    cin >> rowCount;
    int num = 1;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}