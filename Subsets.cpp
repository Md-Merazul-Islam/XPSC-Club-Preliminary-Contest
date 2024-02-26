
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int subset(int n, int a[], int target)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
    }
    if (target > totalSum || (target + totalSum) % 2 != 0)
    {
        return 0;
    }
    int s = (target + totalSum) / 2;
    int dp[n + 1][s + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = (dp[i - 1][j - a[i - 1]] + dp[i - 1][j]) % MOD;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][s];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> target;
        int count = subset(n, a, target);
        cout << count << endl;
    }
    return 0;
}
