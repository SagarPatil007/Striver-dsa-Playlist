#include <bits/stdc++.h>
using namespace std;
int bf(vector<int> v)
{
    int maxi = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            maxi = max(maxi, v[j] - v[i]);
        }
    }
    return maxi;
}
int maxProfit(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        int diff = prices[i] - mini;
        profit = max(profit, diff);
        mini = min(mini, prices[i]);
    }
    return profit;
}
int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    // vector<int> v= {7,6,4,3,1};
    // cout << bf(v);
    cout <<maxProfit(v);
}