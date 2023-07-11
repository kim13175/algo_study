#include <bits/stdc++.h>

using namespace std;

#define MAX 100005

int n;
int open_m[MAX], open_d[MAX];
int close_m[MAX], close_d[MAX];


void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> open_m[i] >> open_d[i] >> close_m[i] >> close_d[i];
	}
}

void solve() {

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();

	return 0;
}