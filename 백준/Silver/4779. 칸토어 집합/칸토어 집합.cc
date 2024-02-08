// n번째 집합 = n-1번쨰 집합 + n-1번째 집합 길이의 공백 + n-1번째 집합
// -> 1번째 집합 = 0번째 집합: -, 공백 " " + 0번째 집합: -
// -> - -
// -> 2번째 집합 = 1번째 집합: - -. 공백 "   " 1번째 집합: - -
// -> - -   - -
#include<iostream>
#include<math.h>
using namespace std;

void sol(int n)
{
    int emp = pow(3, n - 1);

    if (n == 0)
    {
        cout << "-";
        return;
    }

    sol(n - 1);
    for (int i = 0; i < emp; i++)
    {
        cout << " ";
    }
    sol(n - 1);
}

int main(void)
{
    int n;
    while (cin >> n)
    {
        sol(n);
        cout << endl;
    }

    return 0;
}