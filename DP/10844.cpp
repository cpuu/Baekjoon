/*
    쉬운 계단 수 : https://www.acmicpc.net/problem/10844

    $ g++ 10844.cpp -o 10844
*/

#include <iostream>
using namespace std;

int main()
{
    long long d[101][10];
    long long result;

    int n;
    cin >> n;

    d[1][0] = 0;
    for (int j = 1; j < 10; j++)
    {
        d[1][j] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            d[i][j] = 0;
            if (j != 0)
            {
                d[i][j] += d[i - 1][j - 1];
            }
            if (j != 9)
            {
                d[i][j] += d[i - 1][j + 1];
            }
            d[i][j] %= 1000000000;
        }
    }

    result = 0;
    for (int j = 0; j < 10; j++)
    {
        result += d[n][j];
    }

    cout << result % 1000000000 << "\n";

    return 0;
}