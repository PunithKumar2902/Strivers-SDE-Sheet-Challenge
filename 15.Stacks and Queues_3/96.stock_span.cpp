#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &prices) {
    // Write your code here.

    int n= prices.size();
    vector<int> ans(n);
    stack<pair<int,int>> st;

    ans[0]=1;
    st.push({prices[0],0});
    for(int i=1;i<n;i++)
    {
        if(prices[i]<prices[i-1])
        {
            ans[i]=1;
            st.push({prices[i-1],i-1});
        }
        else
        {

            while(!st.empty()&&prices[i]>=st.top().first)
                st.pop();
            
            if(st.empty())
            {
                ans[i] = i+1;
            }
            else
            ans[i] = i-st.top().second;
        }

    }

    return ans;
}
