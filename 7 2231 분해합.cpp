#include <iostream>
using namespace std;

int main() {
	int p;
	cin >> p;
	int res = 0;

	for (int i = 1;i <= p;i++) {
		int cnt = i; 
		res = i;
		while (i) {
			cnt += i % 10;
			i /= 10;
		}
		if (p == cnt) {
			break;
		}
		i = res;
		
	}

	if (res == p)
		cout << 0;
	else
		cout << res;

	

	return 0;
}
	