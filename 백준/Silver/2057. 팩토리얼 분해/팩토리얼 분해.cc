// 2057
// 0! + 1! + 2!.... + (n - 1)! <= n!이다.
// 조합을 써야할까? 2초라서 사용해도 상관은 없을 거 같다.
// 아니면 단순하게 가장 큰 factorial의 값부터 빼면서 해도 될 거 같다.
#include<iostream>
#include<vector>
typedef unsigned long long ll;
using namespace std;

ll fact[21];

void factorial() {
	fact[0] = 1;
	fact[1] = 1;
	for (int i = 1; i <= 20; i++) {
		fact[i] = fact[i - 1] * i;
	}

	return;
}



int main() {
	ll n;
	ll sum = 0;
	cin >> n;

	if (n == 0) {
		cout << "NO" << endl; // 0인 경우는 NO
		return 0;
	}

	factorial();

	for (int i = 20; i >= 0; i--) {
		if (n >= fact[i]) {
			n -= fact[i];
		}
	}
	if (n == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	

	return 0;
}