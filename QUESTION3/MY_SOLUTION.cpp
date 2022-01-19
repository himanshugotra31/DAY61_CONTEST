int Solution::solve(vector<int> &A) 
{
    int arr[4]={0};                                            //this array will contain counting of every mod value which will be of A[i]%4
    for(int i=0;i<A.size();i++)
    {
        arr[A[i]%4]++;
    }
    int ans=0;
    int minm=arr[3];                                          //'minm' will contain minimum element from arr[1] or arr[3]  
    if(arr[1]<arr[3])
    {
        minm=arr[1];
    }
    ans+=minm;
    arr[1]=arr[1]-minm;
    arr[3]=arr[3]-minm;
    if(minm%2!=0)
    {
        return -1;
    }
    arr[2]=arr[2]+((arr[1]+arr[3])/2);
    ans=ans+(arr[2]/2)+((arr[1]+arr[3])/2);
    if(arr[2]%2!=0)
    {
        return -1;
    }
    return ans;
}
//refer to page 70-75, notebook 4
//T.C. for this code: O(N)
//S.C. for this code: O(1)
int Solution::solve(vector<int> &A) 
{
    int arr[4]={0};                                            //this array will contain counting of every mod value which will be of A[i]%4
    for(int i=0;i<A.size();i++)
    {
        arr[A[i]%4]++;
    }
    int ans=0;
    int minm=arr[3];                                          //'minm' will contain minimum element from arr[1] or arr[3]  
    if(arr[1]<arr[3])
    {
        minm=arr[1];
    }
    ans+=minm;
    arr[1]=arr[1]-minm;
    arr[3]=arr[3]-minm;
    if(arr[3]%2!=0 or arr[1]%2!=0)
    {
        return -1;
    }
    arr[2]=arr[2]+((arr[1]+arr[3])/2);
    ans=ans+(arr[2]/2)+((arr[1]+arr[3])/2);
    if(arr[2]%2!=0)
    {
        return -1;
    }
    return ans;
}
//refer to page 70-75, notebook 4
//T.C. for this code: O(N)
//S.C. for this code: O(1)
