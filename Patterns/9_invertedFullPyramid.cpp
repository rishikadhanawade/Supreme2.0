// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
// space -> row, star -> n - row
#include <iostream>
using namespace std;
int main()
{

    int rowCount;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}