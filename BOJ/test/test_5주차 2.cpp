#include <bits/stdc++.h>

using namespace std;
string nums; // 길거리에서 주어온 수
int new_num;

void input() {
	cin >> nums;
	new_num = nums;
}

void solve() {
	int max_num = 0;
	for (int i = 0; i < nums.length(); i++) {
		
	}
	max_num = max(max_num, nums);
	cout << max_num;
}

void print() {
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	input();
	//solve();
	print();
	return 0;
}