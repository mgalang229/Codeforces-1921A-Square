#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x[4], y[4];
	for (int i = 0; i < 4; i++)
		cin >> x[i] >> y[i];
	int ans = 0;
	for (int i = 1; i < 4; i++) {
		if (x[0] == x[i]) {
			ans = abs(y[0] - y[i]);
			break;
		}
		if (y[0] == y[i]) {
			ans = abs(x[0] - x[i]);
			break;
		}
	}
	cout << ans * ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--)
		solve();
}
