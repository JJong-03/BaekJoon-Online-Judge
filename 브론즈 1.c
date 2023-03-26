#define _CRT_SECURE_NO_WARNINGS
//1037번 약수
#if 0
#include<stdio.h>
int main() {
	int a[50];
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("%d", max * min);
}
#endif
//1032번 명령 프롬프트
#if 0 
#include<stdio.h>
int main() {
	int n = 0, check = 0;
	char a[50][50], output[50];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", a[i]);
	}
	for (int j = 0; j < 50; j++) {
		check = 0;
		for (int k = 1; k < n; k++) {
			if (a[k][j] != a[0][j]) check = 1;
		}
			if (check) output[j] = '?';
			else output[j] = a[0][j];
	}
	printf("%s", output);
}
#endif
//1110번 더하기 사이클
#if 0 
#include<stdio.h>
int main() {
	int n = 0, count = 0;
	int a, b, c, d = -1;
	scanf("%d", &n);
	int result = n;
	while (d != result) {
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		count++;
	}
	printf("%d", count);
}
#endif
//1157번 단어 공부 틀린거 런타임 오류
#if 0
#include<stdio.h>
int main() {
	char c[100];
	char word[26];
	char bigword[26];
	int result[26];
	int max = 0, i = 0, count = 0;
	scanf("%s", &c);
	for (int i = 0; i < 26; i++) {
		result[i] = 0;
		word[i] = 'a' + i;
		bigword[i] = 'A' + i;
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (c[i] == word[j] || c[i] == bigword[j]) {
				result[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (result[max] < result[i]) {
			max = i;
		}
	}
	for (int i = max+1; i < 26; i++) {
		if (result[max] == result[i]) {
			count++;
		}
	}
	if (count != 0) {
		printf("?");
	}
	else printf("%c", bigword[max]);
}

#endif
//1157번 맞는 답 배낀 거 다시보기
#if 0
#include <stdio.h>
#include <string.h>

char a[1000005];
int arr[26];
int main() {
	int max = 0;
	int size;
	char ans;

	scanf("%s", a);
	size = strlen(a);

	for (int i = 0; i < size; i++)
		if (a[i] >= 'a') arr[a[i] - 'a']++;
		else arr[a[i] - 'A']++;

	for (int i = 0; i < 26; i++)
		if (arr[i] == max) {
			ans = '?';
		}
		else if (arr[i] > max) {
			max = arr[i];
			ans = 'A' + i;
		}

	printf("%c", ans);

	return 0;
}
#endif
//1145번 적어도 대부분의 배수
#if 0
#include<stdio.h>
int main() {
	int n = 0, i = 0;;
	int result[100];
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i++;) {
		int cnt = 0;
		for (int j = 0; j < 5; j++) {
			if (i % a[j] == 0) {
				cnt++;
				if (cnt >= 3) {
					printf("%d", i);
					break;
				}
			
			}
		}
		return 0;
	}
	
}
#endif

#if 0
#include<stdio.h>
int main() {
	//10진수로 먼저 바꾸기

	int bin = 0, dec = 0, temp = 1; 
	scanf("%d", &bin);

	while (bin != 0) {
		if (bin % 10 == 1) {
			dec = dec + temp;
		}
		bin = bin / 10;
		temp = temp * 2;
	}
	
	//10진수로 변한 걸 8진수로 출력
	printf("%o", dec);
}
#endif
//2진수 8진수로 바로 변환 2^3 = 8을 이용
#if 0
#include<stdio.h>
#include<string.h>
int main() {
	char dec[10000001];
	scanf("%s", &dec);
	int len = strlen(dec);
	if (len % 3 == 1) {
		printf("%d", dec[0] - 48);
	}
	else if (len % 3 == 2) {
		printf("%d", 2 * (dec[0] - 48) + dec[1] - 48);
	}
	for (int i = len % 3; i < len; i += 3) {
		printf("%d", 4 * (dec[i] - 48) + 2 * (dec[i + 1] - 48) + dec[i + 2] - 48);
	}
	return 0;
	
}
#endif
//2609 번  최대공약수와 최소공배수
#if 0
#include<stdio.h>
int main() {
	int a = 0, b = 0, i = 2, sum = 1, bigsum = 1;
	scanf("%d %d", &a, &b);
while(a >= i && b >= i){
		if (a % i == 0 && b % i == 0) {
			a /= i;
			b /= i;
			sum *= i;

		}
		else {
			i++;
		}
	}
	bigsum = sum * a * b;
	printf("%d\n", sum);
	printf("%d", bigsum);
}
// 2부터 안 들어가지면 while문을 못 들어감
#endif
//수 정렬하기 3
#if 0
#include<stdio.h>
int main() {
	int n = 0;
	int arr[10000] ={0,};
	int temp = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}
#endif
#if 0
#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	// 1. 카운팅 배열 선언/초기화
	int counting[10001];
	for (int i = 0; i < 10001; i++) {
		counting[i] = 0;
	}

	// 2. 카운팅 정렬 (입력)
	for (int i = 0; i < N; i++) {
		int input;
		scanf("%d", &input);
		counting[input]++;
	}

	// 3. 카운팅 정렬 (출력)
	for (int i = 0; i < 10001; i++) {
		// counting[i] 횟수만큼 i 출력
		for (int j = 0; j < counting[i]; j++) {
			printf("%d\n", i);
		}
	}
}
#endif

