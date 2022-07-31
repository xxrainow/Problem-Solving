#include <iostream>

using namespace std;

int main() {
	int N, M=0;
	cin >> N >> M;
	int arr[1000]={0,};

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}


	int sum = 0;
	int ans = 0;

	for (int j = 0; j < N - 2; j++) {
		for (int k = j + 1; k < N - 1; k++) {
			for (int l = k + 1; l < N; l++) {
					sum = arr[j] + arr[k] + arr[l];
					if (sum <= M && sum > ans) //이 부분에 이 조건만 제대로 썼으면 됐는데 괜히 빼서 최솟값 구해서 어쩌고 했음ㅠㅠ
						ans = arr[j] + arr[k] + arr[l]; //ans의 역할이 좀 중요한듯
				}

		}
	}

	
	cout << ans;

	return 0;
}