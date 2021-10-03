#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        vector<int> b;
        int e = 0;
        int o = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                b.push_back(even[e++]);
            else
                b.push_back(odd[o++]);
        }

        if (is_sorted(b.begin(), b.end()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}