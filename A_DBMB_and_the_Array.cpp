// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, s, x;
//         cin >> n >> s >> x;
//         vector<int> v(n);
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             sum += v[i];
//         } 
//        sum = s-sum;
//         if (sum >= 0 && sum%x==0)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
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
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            int num;
            cin>>num;
            sum+=num;
        }
        if(sum<=b&&(b-sum)%c==0){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
