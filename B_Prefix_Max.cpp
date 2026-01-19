// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     using namespace std;

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             if (a > ans)
//             {
//                 ans = a;
//             }
//         }
//         long long res = (long long)ans * n;
//         cout << res << '\n';
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        int ans = *max_element(v.begin(),v.end());
        cout<<n*ans<<'\n';
    }
    return 0;
}