#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here

	int maxi,maxp,minp;

	maxi = minp = maxp = arr[0];

	
	for(int i=1;i<n;i++)
	{
		if(arr[i]<0)
			swap(maxp,minp);
	
		maxp = max(arr[i]*maxp,arr[i]);
		minp = min(arr[i]*minp,arr[i]);

		maxi = max(maxi,maxp);
	}

	return maxi;
}
