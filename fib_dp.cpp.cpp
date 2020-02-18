#include <bits/stdc++.h>
using namespace std;
int dp[100000];
dp[0] = 0;
dp[1] = 1;
int fib(int n)
{
    if (dp[n] != 0 || n == 0)
        return dp[n];
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}
