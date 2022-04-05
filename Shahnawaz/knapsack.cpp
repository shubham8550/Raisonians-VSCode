
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
const int N = 1e5 + 2;

// #define ll long long intll dp[101][101];int wt[N], val[N];

int Knapsack(int n, int w) {
if (w <= 0){
return 0; 
}
if (n <= 0)
{  return 0;  
}
if (wt[n - 1] <= w)
{ return Knapsack(n - 1, w);
}
return max(Knapsack(n - 1, w), Knapsack(n - 1, w - wt[n - 1]) + val[n - 1]);
}
int knapsackR(int wt[], int val[], int w, int n) 
{
     if (n == 0 || w == 0) 
     {
         return 0;
     }
     else if (wt[n - 1] <= w) {
     return max(val[n - 1] + knapsackR(wt, val, w - wt[n - 1], n - 1), knapsackR(wt, val, w, n - 1)); return knapsackR(wt, val, w, n - 1);
     }
      

// This is our driver code //

int main()
{ 
int n; 
cin >> n; 
int wt[n], val[n], w;
for (int i = 0; int < n; i++) 
{ cin >> wt[i]; 
} 
for (int i = 0; i < n; i++)
{ cin >> val[i];
} 
cin >> w;
int ans = knapsackR(wt, val, w, n);
cout << ans; 
return 0;
}
