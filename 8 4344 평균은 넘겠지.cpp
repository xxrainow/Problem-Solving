#include <iostream>
using namespace std;

int main() {
	int c = 0;
	cin >> c;

	for (int i=0; i < c; i++) {
		float N = 0;
		float avg = 0, sum = 0;
		float grade_[1001] = { 0, };
		cin >> N;
		for (int j=0; j < N; j++) {
			cin >> grade_[j]; //for�� �ٱ� int�� �ȿ� int���� �޶�ߵ� �������� �𸣰���;; �׷��� i�� j�� �ٲ���
			sum += grade_[j]; //[]�ȿ� N�� ����� �ٺ�;;
		}
		avg = sum / N; // *100�� �߾���(������)
		float cnt = 0;
		for (int k = 0; k < N; k++) { // for���� if�� ���̿� cin�̶� sum ���� ������ ����� = ������ϴ� �����̾���;��;
			if (avg < grade_[k]) {
				cnt += 1;
			}
		}
		float res = 0;
		res = (cnt / N)*100;
		printf("%.3f%%\n", res);
	}

	return 0;
}