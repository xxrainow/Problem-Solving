#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int h, w, n;
		
	for (int i = 0; i < t; i++) { // �׽�Ʈ ���̽��� �����ص���
		cin >> h >> w >> n;
		if ((n % h) == 0) {
			cout << h * 100 + (n / h) << '\n';
		}
		else
			cout << (n % h) * 100 + ((n / h) + 1) << '\n'; ;//\n�Է� ���ؼ� ����������
	}

	return 0;
}