#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int h, w, n;
		
	for (int i = 0; i < t; i++) { // 테스트 케이스는 대충해도됨
		cin >> h >> w >> n;
		if ((n % h) == 0) {
			cout << h * 100 + (n / h) << '\n';
		}
		else
			cout << (n % h) * 100 + ((n / h) + 1) << '\n'; ;//\n입력 안해서 오류떴었음
	}

	return 0;
}