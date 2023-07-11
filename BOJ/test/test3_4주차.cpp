// 06/30 18:08

#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, string>> person;
int age;
string name;



void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		person.push_back({ age, name });
	}
}

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	input();
	//sort(person.begin(), person.begin() + n); stable ���� �ȵ�
	stable_sort(person.begin(), person.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << person[i].first << " " << person[i].second << "\n";
	}

	return 0;
}