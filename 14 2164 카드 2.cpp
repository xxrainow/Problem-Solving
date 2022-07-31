#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N;
	cin >> N;
	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	int tmp = 0;

	for (int j = 0; j < N-1; j++) {
		q.pop();
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}

	int res = q.front();
	cout << res;

	return 0;
}