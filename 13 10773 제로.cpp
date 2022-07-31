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
			continue; //?????? 만약 a가 0일 때 s.pop하고 아래거 무시한다는 소리래~ 그리고 for문 다시~~
		}
		s.push(a); //?????? s.push가 if문 뒤에 있으니까 0이 스택안에 안들어감~~
	}

	int res = 0;

	while(s.size() != 0){ //스택 크기가 0이 아닐 때만 while문 안에 계속 돌린다~
		res += s.top();
		s.pop();
	}

	cout << res;

	return 0;
}