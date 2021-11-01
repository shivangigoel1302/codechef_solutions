#include <bits/stdc++.h>
using namespace std;

int phi[1000005]; // Euler totient function phi

void precompute(int n)
{
     phi[1] = 1;

     for (int i = 2; i <= n; i++)
          phi[i] = i - 1;

     for (int i = 2; i <= n; i++)
     {
          //Based on the divisor sum property of phi
          for (int j = 2 * i; j <= n; j += i)
               phi[j] -= phi[i];
     }
}

int main()
{
     precompute(1000000);

     int tests;
     cin >> tests;

     while (tests--)
     {
          int n;
          cin >> n;

          long long int ans = 0;
          for (int i = 1; i <= n; i++)
          {
               ans += (1LL * phi[i] * (n / i) * (n / i));
          }

          ans = 2 * ans - 1LL * n * n;

          cout << ans << endl;
     }
     return 0;
}
