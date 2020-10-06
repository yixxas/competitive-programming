#include<bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int n; cin >> n;
	vector<pair<int>> a(n); for (auto& a : a) cin >> a;
	for (auto x: a)
		cout << x << endl;

}
