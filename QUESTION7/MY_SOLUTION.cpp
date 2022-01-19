int Solution::solve(vector<int> &A, vector<int> &B)
{
    int n=A.size();                                     //n is equal to size of vector A and vector B, since size of both of them are equal
    int j=1;
    int i=0, k=n-1;
    int ans=INT_MAX;
    for(j=1;j<=n-2;j++)
    {
        int final_i=INT_MAX;
        int final_k=INT_MAX;
        while(i<j)
        {
            if(A[i]<A[j] and B[i]<final_i)
            {
                final_i=B[i];
            }
            i++;
        }
        i=0;
        while(k>j)
        {
            if(A[j]<A[k] and B[k]<final_k)
            {
                final_k=B[k];
            } 
            k--;
        }
        k=n-1;
        int temp_ans=INT_MAX;
        if(final_i!=INT_MAX and final_k!=INT_MAX)
        {
            temp_ans=final_i+B[j]+final_k;
        }
        if(temp_ans<ans)
        {
            ans=temp_ans;
        }
    }
    if(ans==INT_MAX)
    {
        return -1;
    }
    return ans;
    
}
//refer page page 78-83, notebook 4
//T.C. for this code:O(N*N)
//S.C. for this code:O(1)
