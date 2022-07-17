#include <iostream>
#include <string>

using namespace std;

int cnt[26];

int main() {
	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;

		for (int j = 0; j < 26; j++) {
			if (s[i] - 'a' == j)
				cnt[j]++;
		}
	}

	int max = 0;
	int ans = -1;
	int max_cnt = 0;
	for (int k = 0; k < 26; k++) {
		if (cnt[k] > max) {
			max = cnt[k];
			ans = k;
			max_cnt = 0;
		}

		else if (cnt[k] == max)
			max_cnt ++;
	}


	if (max_cnt >= 1) {
		cout << "?";
	}
	else
		cout << char(ans + 'A');

	return 0;
}
