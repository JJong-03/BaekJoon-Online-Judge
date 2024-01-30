// 4779 분할 정복 - 재귀
#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;



void cut(int st, int n, string &str) { // st = start 지점
	if (n == 1) {
		//cout << str;
		return;
	}
	for (int i = st + n / 3; i < st + (n / 3) * 2; i++) {
		str[i] = ' ';
	}

	// 왼쪽 잘라내기
	cut(st, n / 3, str);

	// 오른쪽 잘라내기
	cut(st + n / 3 * 2, n / 3, str);
}

void initStr(int n, string &str) {
	for (int i = 0; i < pow(3, n); i++) {
		str += '-';
	}
	return;
}

int main() {
	int n;
	while (cin >> n) {
		if (cin.eof()) return 0;

		string str;
		initStr(n, str);
		cut(0, pow(3, n),str);
		cout << str << endl;
	}
	return 0;
}