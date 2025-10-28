#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;

        if (a > b)
        {
            cout << -1 << endl;
            continue;
        }
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        
        
            long long x = a^b;
            if (x <= a)
            {
                cout << 1 << endl;
                cout << x << endl;
            }
            else{
                cout<<2<<endl;
                cout<<a<<" "<<(x^a)<<endl;
            }
        }
    

    return 0;
}