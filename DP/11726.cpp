/*
    2×n 타일링 : https://www.acmicpc.net/problem/11726

    $ g++ 11726.cpp -o 11726
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> d(1001, 0);

    int number;

    cin >> number;

    d[0] = 1;
    d[1] = 1;

    for (int i = 2; i <= number; i++)
    {
        d[i] = (d[i - 1] + d[i - 2]) % 10007;
    }

    cout << d[number] << "\n";

    return 0;
}