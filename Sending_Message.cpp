#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a, b;
    while (cin >> a >> b)
    {

        int i = 0;
        int j = 0;
        int n = a.size();
        int m = b.size();
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                j++;
            }
            i++;
        }
        if (j == m)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}