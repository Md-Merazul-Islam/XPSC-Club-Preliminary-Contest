#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {

            if (row == n || col == n)
            {
                cout << n;
            }
            else if (row == 1)
            {
                cout << col;
            }
            else if(col==1)
            {
                cout<<row;
            }

            else
            {

                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
