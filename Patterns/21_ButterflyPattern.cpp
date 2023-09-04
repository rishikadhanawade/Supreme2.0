// *             * 
// * *         * *
// * * *     * * * 
// * * * * * * * *
// * * * * * * * * 
// * * *     * * *
// * *         * *
// *             *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n / 2;
    for (int row = 0; row < m; row++)
    {
        // half pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        // full inverted pyramid
        for (int col = 0; col < 2 * m - 2 * row - 2; col++)
        {
            cout << "  ";
        }
        // half pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < m; row++)
    {
        // inverted half pyramid
        for (int col = 0; col < m - row; col++)
        {
            cout << "* ";
        }

        // full inverted pyramid
        for (int col = 0; col < 2 * row; col++)
        {
            cout << "  ";
        }
        // inverted half pyramid
        for (int col = 0; col < m - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}