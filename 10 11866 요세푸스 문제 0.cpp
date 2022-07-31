#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N, K;
	int tmp = 0;
	cin >> N >> K;
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	int arr[1001] = { 0, };
	int a = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= K - 1; j++) {
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		arr[a] = q.front();
		a++;
		q.pop();
	}
	cout << "<";
	for (int a = 0; a < N - 1; a++)
		cout << arr[a] << "," << " ";
	cout << arr[N-1] << ">";

	return 0;
}