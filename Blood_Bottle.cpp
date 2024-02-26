#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n= s.size();
        priority_queue<int> pq;
        string st;
        int zara = 0;
        int kaza = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (i + 1 < n && s[i + 1] == '1')
                {
                    st.push_back(s[i]);
                }
                else if (i + 1 < n && s[i + 1] == '0')
                {
                    st.push_back(s[i]);
                    pq.push(st.size());
                    st = "";
                }
                else
                {
                    st.push_back(s[i]);
                    pq.push(st.size());
                    st = "";
                }
            }
            else
            {
                st = "";
            }
        }

        if (st.size())
        {
            pq.push(st.size());
        }

        while (!pq.empty())
        {
            zara += pq.top();
            pq.pop();
            if (!pq.empty())
                pq.pop();
        }

        cout << zara << endl;
    }
    return 0;
}
