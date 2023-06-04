#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr ={0,1,2,2,1,0};

    int n=arr.size();

    //Brute force

    //sort(arr.begin(),arr.end());
    
    int zer=0,one=0;

   for(int i=0;i<n;i++)
   {
      if(arr[i]==0) zer++;
      else if(arr[i]==1) one++;
   }

   for(int i=0;i<n;i++)
   {
      if(zer!=0)
      {
         arr[i]=0;
         zer--;
      } else if (one != 0)
       {
        arr[i] = 1;
        one--;
      } else
        arr[i] = 2;
   }

    for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }

}
