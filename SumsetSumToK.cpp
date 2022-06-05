#include<bits/stdc++.h>

vector<vector<int>> ans;
vector<int> subset;

void rec(int level, vector<int> &arr, int target)
{
    if(level==arr.size())
    {
        int sum = 0;
        for(auto &x:subset)
            sum+=x;
        
        if(sum==target)
            ans.push_back(subset);
            
        return;
    }
    
    subset.push_back(arr[level]);
    rec(level+1,arr,target);
    subset.pop_back();
    rec(level+1,arr,target);
    
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
        ans.clear();
        subset.clear();
    
        rec(0,arr,k);
        
        return ans;
}
