#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int ans = v[i];
            int ans1 = i;
            for (int j = i; j < n; j++)
            {
                if (v[j] > ans)
                {
                    ans = v[j];
                    ans1 = j;
                }
            }
            if (ans > v[i])
            {
                reverse(v.begin() + i, v.begin() + ans1 + 1);
                break;
            }
        }
        for (auto ans3 : v)
        {
            cout << ans3 << " ";
        }
        cout << '\n';
    }

    return 0;
}