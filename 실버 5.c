#define _CRT_SECURE_NO_WARNINGS
//문자열 단계별
#if 0
#include<stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	printf("%d", a);
}
#endif
#if 0
#include<stdio.h>

int main() {
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    char arr[100];
    scanf("%s", &arr);
    for (int i = 0; i < n; i++) {
        sum += arr[i] -'0';
    }
    printf("%d", sum);
}
#endif
#if 0
#include <stdio.h> 
int main(void){    
    char S[100] = { 0 }; 
scanf("%s", S);    
for (int i = 97; i <= 122; i++) {       
    int j = 0;      
    while (S[j] != 0) {
        if (S[j] == i) { 
            break;
        }
        j++;
    }
    if (S[j] == i) { 
        printf("%d ", j); 
    }
    else printf("-1 ");    }
}

#endif
#if 0
#include<stdio.h>
#include<string.h>
int main() {
    int T = 0;
    int R = 0;
    char S[20];
    
    scanf("%d", &T);
 
    for (int i = 0; i < T; i++) {
        scanf("%d", &R);
        scnaf("%s", &S);
    }
    for(int j = 0; j<strlen(S); j++)
}
#endif
#if 0
#include<stdio.h>
int main() {
    int a = 3;
        int b = 2;
        int c = 5;
        int d = (a >= b) + c;
        printf("%d", d);
        return 0;
}
#endif
//1316번
#if 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    int a = 0;
    int j = 0;
    int count = 0;
    char str[100];
    char alpha[26];
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%s", &str);
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 32;
        }
    }
    for (int j = 0; j < 26; j++) {
        alpha[j] = 'a' + j;
    }
    
    for (int k = 0; k < strlen(str); k++) {
        
    }

    while (str[j] != NULL) {
        if(str[j])
    }
}
#endif
