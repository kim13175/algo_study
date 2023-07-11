#include <bits/stdc++.h>

using namespace std;
int n, m;
int board[501][501];
int vst[501][501];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void input() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
}

void solution() {
	int cnt = 0, area = 0, max_area = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vst[i][j] == 1 || board[i][j] == 0) continue;
			queue<pair<int, int>> draw;
			vst[i][j] = 1;
			draw.push({ i, j });
			while (!draw.empty()) {
				pair<int, int> loc = draw.front();
				draw.pop();
				for (int i = 0; i < 4; i++) {
					cnt++;
					int nx = loc.first + dx[i];
					int ny = loc.second + dy[i];
					if (nx >= n || nx < 0 || nx >= m || nx < 0) continue;
					if (vst[i][j] != 0 || board[i][j] == 0) continue;
					vst[i][j] = 1;
					draw.push({ nx, ny });
					area++;
				}
				max_area = max(max_area, area);
			}
		}
	}
	cout << cnt << "\n" << max_area;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	input();
	solution();

	return 0;
}