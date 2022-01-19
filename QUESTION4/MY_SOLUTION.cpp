string Solution::solve(int A)
{
    string ans="";
    A=A+1;
    int temp=A;
    while(temp!=0)
    {
        char d=(temp%10)+'0';
        ans=ans+(d);
        temp=temp/10;
    }
    int n=ans.length();
    for(int i=0;i<n/2;i++)
    {
        int temp2=ans[i];
        ans[i]=ans[n-i-1];
        ans[n-i-1]=temp2;
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i]=='0')
        {
            ans[i]='1';
        }
    }
    return ans;
}
//refer to page 66-69, notebook 4
//T.C. for this code: O(1)
//S.C. for this code: O(1)
