#include <bits/stdc++.h>

using namespace std;

#define MAX 10005

int n;
int dp[MAX];
int amount[MAX];

int bigger(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	}
	else if (b >= c && b >= a) {
		return b;
	}
	else if (c >= a && c >= b) {
		return c;
	}
}

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> amount[i];
	}
}

void solve() {
	// ù��° ��
	dp[0] = amount[0];
	// �ι�° ��
	dp[1] = amount[0] + amount[1];
	// 1. ���� ��
	// 2. ���� ����
	// 3. ���� ������
	for (int i = 2; i < n; i++) {
		dp[i] = bigger(dp[i - 1], dp[i - 2] + amount[i], dp[i - 3] + amount[i - 1] + amount[i]);
	}
	cout << dp[n - 1] << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	input();
	solve();

	return 0;
}