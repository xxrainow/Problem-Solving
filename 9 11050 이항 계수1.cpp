#include <iostream>

using namespace std;

int main() {
	int N = 0, K = 0, NmK = 0;
	int Nf = 1, Kf = 1, NmKf = 1;

	cin >> N >> K;
	NmK = N - K;

	for (int i = 1; i <= N; i++) {
		Nf *= i;
	}

	for (int j = 1; j <= K; j++) {
		Kf *= j;
	}

	for (int k = 1; k <= NmK; k++) {
		NmKf *= k;
	}

	float res = 0;
	res = Nf / (Kf * NmKf);
	cout << res;

	return 0;
}