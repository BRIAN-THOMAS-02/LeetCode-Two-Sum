Two Sum - "https://leetcode.com/problems/two-sum/"
SUBMISSION 

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unsigned long long int n = nums.size();
        unsigned long long int ans1, ans2;
        vector<int> vect;
        
        for (int i=0; i<=n; i++)
            for (int j=i+1; j<n; j++)
                if (nums[i] + nums[j] == target)
                {
                    cout<<i<<j;
                    vect.push_back(i);
                    vect.push_back(j);
                }
    
    return vect;
    }
};
