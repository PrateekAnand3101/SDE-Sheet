#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, c, line;
    cout << "Enter no. of lines of pascal's triangle:\n";
    cin >> n;
    for (line = 1; line <= n; line++)
    {
        c = 1;
        for (i = 1; i <= line; i++)
        {
            cout << c;
            c = c * (line - i) / i;
        }
        cout<<endl;
    }

    return 0;
}