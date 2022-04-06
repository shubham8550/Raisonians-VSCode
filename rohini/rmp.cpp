#include<iostream>
#include<climits>
using namespace std;

int knapsack(int v[], int w[], int n, int W)
{
    if(W<0)
      return INT_MIN;
    if(n<0 || W==0)
      return 0;
    int in = v[n] + knapsack(v, w, n-1, W - w[n]);
    int ex = knapsack(v, w, n-1, W);
    return max(in, ex);
    
}
int main()
{
    int v[] = {60, 100, 120};
    int w[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(v) / sizeof(v[0]);
    cout<<"knapsack value is"<<" : "<<knapsack(v, w, n-1, W)<<endl;
    return 0;
}