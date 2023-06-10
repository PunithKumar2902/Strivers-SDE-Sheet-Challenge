

int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.

    int platforms  =1,maxi=1;

    sort(at,at+n);
    sort(dt,dt+n);

    int i=1,j=0;
    
    while(i<n&&j<n)
    {
        if(at[i]<=dt[j])
        {
            platform++;
            i++;
        }
        else 
        {    
            platforms--;
            j++;
        }
        maxi = max(maxi,platforms);
    }
    result maxi;
}
