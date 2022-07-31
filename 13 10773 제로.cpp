#include <iostream>
#include <stack>

using namespace std;

int main() {
	int K, a;
	cin >> K;
	stack<int> s;

	for (int i = 0; i < K; i++) {
		cin >> a;

		if (a == 0) {
			s.pop();
			continue; //?????? ���� a�� 0�� �� s.pop�ϰ� �Ʒ��� �����Ѵٴ� �Ҹ���~ �׸��� for�� �ٽ�~~
		}
		s.push(a); //?????? s.push�� if�� �ڿ� �����ϱ� 0�� ���þȿ� �ȵ�~~
	}

	int res = 0;

	while(s.size() != 0){ //���� ũ�Ⱑ 0�� �ƴ� ���� while�� �ȿ� ��� ������~
		res += s.top();
		s.pop();
	}

	cout << res;

	return 0;
}