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
					if (sum <= M && sum > ans) //�� �κп� �� ���Ǹ� ����� ������ �ƴµ� ���� ���� �ּڰ� ���ؼ� ��¼�� �����Ф�
						ans = arr[j] + arr[k] + arr[l]; //ans�� ������ �� �߿��ѵ�
				}

		}
	}

	
	cout << ans;

	return 0;
}