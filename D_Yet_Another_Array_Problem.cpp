// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     ios::sync_with_stdio(false);
// // // //     cin.tie(nullptr);

// // // //     int t;
// // // //     cin>>t;
// // // //     while(t--){
// // // //         int n;
// // // //         cin>>n;
// // // //         vector<int>v(n);
// // // //         for(int i = 0; i<n;i++){
// // // //             cin>>v[i];
// // // //         }

// // // //     }
// // // //     return 0;
// // // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {

// //         int n;
// //         cin >> n;

// //         vector<ll> v(n);
// //         for (int i = 0; i < n; i++)
// //             cin >> v[i];

// //         ll G = 0;
// //         for (int i = 0; i < n; i++)
// //         {
// //             G = __gcd(G, llabs(v[i]));
// //         }
// //         if (G == 1)
// //         {
// //             cout << 2 << "\n";
// //             continue;
// //         }
// //         const ll limit = 1000000LL;
// //         bool found = false;
// //         for (ll x = 2; x <= limit; x++)
// //         {
// //             if (__gcd(x, G) == 1)
// //             {
// //                 cout << x << "\n";
// //                 found = true;
// //                 break;
// //             }
// //             cout << -1 << '\n';
// //         }
// //     }

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// bool divides_all(const vector<long long>& a, long long p) {
//     for (auto x : a) {
//         if (x % p != 0) return false;
//     }
//     return true;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     vector<long long> primes = {
//         2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
//         31, 37, 41, 43, 47, 53, 59, 61, 67,
//         71, 73, 79, 83, 89, 97
//     };

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         for (auto &x : a) cin >> x;

//         if (find(a.begin(), a.end(), 1) != a.end()) {
//             cout << 2 << "\n";
//             continue;
//         }

//         long long ans = -1;
//         for (auto p : primes) {
//             bool ok = false;
//             for (auto x : a) {
//                 if (x % p != 0) {
//                     ok = true;
//                     break;
//                 }
//             }
//             if (ok) {
//                 ans = p;
//                 break;
//             }
//         }

//         cout << ans << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#include<numeric>
using namespace std;
#define ll long long

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

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll G = 0;
        for (int i = 0; i < n; i++)
        {
            G = __gcd(G, llabs(v[i]));
        }
        if (G == 1)
        {
            cout << 2 << "\n";
            continue;
        }
        const ll limit = 1000000LL;
        bool found = false;
        for (ll x = 2; x <= limit; x++)
        {
            if (__gcd(x, G) == 1)
            {
                cout << x << "\n";
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << '\n';
    }

    return 0;
}