#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (auto &v : a) cin >> v;
        sort(a.begin(), a.end());

        vector<pair<int,int>> gaps;

        // Add midpoints between friends
        for (int i = 0; i + 1 < n; i++) {
            int mid = (a[i] + a[i + 1]) / 2;
            int dist = min(mid - a[i], a[i + 1] - mid);
            gaps.push_back({dist, mid});
        }

        // Add edge positions (0 and x)
        if (a[0] > 0) gaps.push_back({a[0], 0});
        if (a.back() < x) gaps.push_back({x - a.back(), x});

        // Sort by largest distance first
        sort(gaps.rbegin(), gaps.rend());

        vector<int> tele;
        for (int i = 0; i < min(k, (int)gaps.size()); i++)
            tele.push_back(gaps[i].second);

        // If still not enough positions, fill sequentially
        while ((int)tele.size() < k) {
            for (int i = 0; i <= x && tele.size() < k; i++) {
                if (find(tele.begin(), tele.end(), i) == tele.end())
                    tele.push_back(i);
            }
        }

        // ✅ Sort teleports before printing for clean ordered output
        sort(tele.begin(), tele.end());

        for (auto v : tele) cout << v << " ";
        cout << "\n";
    }

    return 0;
}
