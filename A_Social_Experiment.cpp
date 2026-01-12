#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {   
        int number;
        cin>>number;
        if(number==2) cout<<2<<'\n';
        else if(number==3) cout<<3<<'\n';
        else if(number%2==0) cout<<0<<'\n';
        else cout<<1<<'\n';
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         if (n == 2)
//             cout << 2 << '\n';
//         else if (n % 3 == 0)
//             cout << 0 << '\n';
//         else
//             cout << 1 << '\n';
//     }
//     return 0;
// }
