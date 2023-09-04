//    1
//   121
//  12321
// 1234321
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        // inverted pyramid 1
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        int num;
        for (num = 1; num <= row + 1; num++)
        {
            cout << num;
        }
        for (int number = num - 1; number > 1;)
        {
            number = number - 1;
            cout << number;
        }
        cout << endl;
    }
    return 0;
}