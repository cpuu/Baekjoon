/*
    1, 2, 3 더하기 : https://www.acmicpc.net/problem/9095

    $ g++ 9095.cpp -o 9095
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> d(11, 0);

    int loop;
    cin >> loop;

    while (loop--)
    {
        int number;
        cin >> number;

        d[0] = 0;
        d[1] = 1;
        d[2] = 2;
        d[3] = 4;

        for (int i = 4; i <= number; i++)
        {
            d[i] = d[i - 1] + d[i - 2] + d[i - 3];
        }

        cout << d[number] << "\n";
    }

    return 0;
}