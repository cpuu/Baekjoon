/*
    이친수 : https://www.acmicpc.net/problem/2193

    $ g++ 2193.cpp -o 2193
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<long long> d(91, 0);

    int number;

    cin >> number;

    d[1] = 1;
    d[2] = 1;

    for (int i = 3; i <= number; i++)
    {
        d[i] = d[i - 1] + d[i - 2];
    }

    cout << d[number] << "\n";

    return 0;
}