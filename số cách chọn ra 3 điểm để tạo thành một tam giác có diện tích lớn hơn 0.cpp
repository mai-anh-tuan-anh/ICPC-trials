#include <bits/stdc++.h>
using namespace std;
bool notColinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    long long area = 1LL * x1 * (y2 - y3)+ 1LL * x2 * (y3 - y1)+ 1LL * x3 * (y1 - y2);
    return area != 0;
}
int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> points(n);
    for (int i=0;i<n;++i)
        cin>>points[i].first>>points[i].second;
    long long ans = 0;
    for (int i=0;i<n;++i)
        for (int j=i+1;j<n;++j)
            for (int k=j+1;k<n;++k) {
                if (notColinear(points[i].first,points[i].second,points[j].first,points[j].second,points[k].first, points[k].second)) {
                    ans++;
                }
            }
    cout << ans << endl;
    return 0;
}