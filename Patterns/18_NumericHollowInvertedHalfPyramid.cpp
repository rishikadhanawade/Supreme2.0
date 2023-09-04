// 1 2 3 4 5 
// 2     3 
// 3   4 
// 4 5 
// 5 

#include <iostream>
using namespace std;
int main()
{

    int rowCount, colCount;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        int num = row + 1;
        for (int col = 0; col < rowCount - row; col++)
        {
            if(col == 0 || col == rowCount - row - 1 || row == 0)
            {
                cout << num++ << " ";
            }
            else
            {
                cout <<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}   