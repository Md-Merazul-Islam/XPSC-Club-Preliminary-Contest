#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int maxi = INT_MIN;
        int max_ind = -1;
        int secnd = INT_MIN;
        int send_ind = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > maxi)
            {
                secnd = maxi;
                send_ind = max_ind;
                maxi = a[i];
                max_ind = i;
            }
            else if (a[i] > secnd && a[i] != maxi)
            {
                secnd = a[i];
                send_ind = i;
            }
        }

        int left = min(max_ind, send_ind);
        int right = max(max_ind, send_ind);

        cout << left << " " << right << endl;
    }
    return 0;
}
