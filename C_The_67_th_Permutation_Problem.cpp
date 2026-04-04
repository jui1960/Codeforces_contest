#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a = 1;
        int b = 3*n;

        vector<int>v1;
        for (int i = 0; i <n; i++)
        {
           v1.push_back(a);
           v1.push_back(b);
           v1.push_back(b-1);
           a++;
           b -=2;
        }

        for(int ans : v1) cout<<ans<<" ";
        cout<<"\n";
        
    }
    

    return 0;
}