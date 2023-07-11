// 06/30 18:30

#include <bits/stdc++.h>

using namespace std;

int n;
int num;
vector<int> arr;

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
	}
}

void quick_sort(int& arr,int start, int end) {
	int pivot = (start + end) / 2;
	arr
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	input();

	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}