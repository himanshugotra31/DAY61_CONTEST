int Solution::solve(vector<int> &A) 
{
    int max_or=A[0];                        //'max_or' will contain maximum OR a subsequence can have
    int max_and;                            //'max_and' will contain maximum AND a subsequence can have         
    int max=A[0];                           //'max' is maximum value of the array
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        max_or=max_or|A[i];
    }
    max_and=max;
    int ans=max_or+max_and;
    return ans;
    
}
//refer page no. 76-77, notebook 4
//T.C. for this code:O(N)
//S.C. for this code:O(1)

