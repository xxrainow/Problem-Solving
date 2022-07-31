#include <iostream>

using namespace std;

int main() {
	int p;
	cin >> p;
	p = 1000 - p;

	int cnt = 0;
	int n, m = 0;

	cnt += p / 500;
	m = p % 500;
	cnt += m / 100;
	m = m % 100;
	cnt += m / 50;
	m = m % 50;
	cnt += m / 10;
	m = m % 10;
	cnt += m / 5;
	m = m % 5;
	cnt += m / 1;
	m = m % 1;

	cout << cnt;

	return 0;
}