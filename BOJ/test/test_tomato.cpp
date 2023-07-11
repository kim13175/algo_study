#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 1002
#define loc 4

int board[MAX_SIZE][MAX_SIZE];
int dist[MAX_SIZE][MAX_SIZE];
int n, m;
int dx[loc] = { 1, 0, -1, 0 };
int dy[loc] = { 0, 1, 0, -1 };

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;
	queue<pair<int, int>> que;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1)
				que.push({ i, j });
			if (board[i][j] == 0)
				dist[i][j] = -1;
		}
	}
	while (!que.empty()) {
		pair <int, int> curr = que.front(); que.pop();
		for (int i = 0; i < loc; i++) {
			int nx = curr.first + dx[i];
			int ny = curr.second + dy[i];
			if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
			if (dist[nx][ny] >= 0) continue; // 익지않은 토마토 제외하고 예외처리
			dist[nx][ny] = dist[curr.first][curr.second] + 1;
			que.push({ nx, ny });
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dist[i][j] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(ans, dist[i][j]);
		}
	}
	cout << ans;
}
