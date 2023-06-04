#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> st_prices = {17,20,11,9,12,6};

    int n=st_prices.size();

    int mini = 0,maxi = 0,profit=0;

    for(int i=0;i<n;i++)
    {
        if(st_prices[i]<st_prices[mini])
        {
            mini =i;
        }
         if(st_prices[i]>st_prices[maxi])
        {
            maxi =i;
        }
        if(maxi>mini)
        {
            profit =max(profit,st_prices[maxi]-st_prices[mini]);
        }
    }
    cout<<profit<<" ";
}
