// * 
// * *
// * * *
// * * * *
// * * * 
// * *
// *

#include <iostream>
using namespace std;
int main()
{

    int rows;
    cin >> rows;
    int rowCount = rows / 2;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < rowCount - 1; row++)
    {
        for (int col = 0; col < rowCount - 1 - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}