#include <bits/stdc++.h> 

void get_perms(string &s,int ind,vector<string> &perms)
{
    int n=s.size();
    if(ind==n)
    {
        perms.push_back(s);
    }

    for(int i=ind;i<n;i++)
    {
        swap(s[ind],s[i]);
        get_perms(s,ind+1,perms);
        swap(s[ind],s[i]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> perms;

    get_perms(s,0,perms);

    return perms;
}
