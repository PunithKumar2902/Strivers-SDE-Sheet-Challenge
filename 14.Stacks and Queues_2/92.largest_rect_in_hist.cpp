 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
    int n=heights.size();
    int maxi =0;
    stack<int> s;

    for(int i=0;i<=n;i++)
    {
        while(!s.empty() && (i==n or heights[s.top()]>=heights[i]))
        {
            int h = heights[s.top()];
            s.pop();
            int width;
            if(s.empty()) width =i;
            else 
              width = i-s.top()-1;

            maxi =max(maxi,width*h);

        }
        s.push(i);
    }
  return maxi;
 }
