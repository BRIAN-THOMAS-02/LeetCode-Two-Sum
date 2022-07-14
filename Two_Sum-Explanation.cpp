LeetCode - Two Sum -- https://leetcode.com/problems/two-sum/
Explanation


#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        cout<<"target : "<<target<<"\n\n";
        vector<int> a;
        vector<int> b;
        int n = nums.size();
        
        cout<<"n : "<<n;
        for (int i=0; i<n-1; i++)
        {
            cout<<"\n\ni : "<<i<<"\n";
            for (int j=i+1; j<n; j++)
            {
                cout<<"  ";
                cout<<nums[i]<<" + "<<nums[j]<<" = "<<nums[i] + nums[j]<<"  |  target : "<<target<<"\n";
                if (nums[i] + nums[j] == target)
                {
                    cout<<"  ANS MILGAYA BOIZZZ\n\n";
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        
        cout<<"\n\n";
        cout<<"a.size() : "<<a.size();
        
        int l;
        cout<<"\n";
        for (l=0; l<a.size(); l++)
        {
            cout<<"\nl : "<<l;
            cout<<"  | a["<<l<<"] : "<<a[l];
        }
        
    return a;
    }
};


int main()
{   
    vector<int> vector_1 = {1,1,1,2,1,4,8,9};
    Solution obj;
    obj.twoSum(vector_1, 6);
    
    /*vector<int> input;
    input = obj.twoSum(vector_1, 9);
    cout<<input;*/
}

