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
			cin >> grade_[j]; //for문 바깥 int랑 안에 int랑은 달라야됨 왜인지는 모르겟음;; 그래서 i를 j로 바꿔줌
			sum += grade_[j]; //[]안에 N을 썼었음 바보;;
		}
		avg = sum / N; // *100을 했었음(왜저래)
		float cnt = 0;
		for (int k = 0; k < N; k++) { // for문과 if문 사이에 cin이랑 sum 관련 문장을 써놨음 = 없어야하는 문장이었음;ㅁ;
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