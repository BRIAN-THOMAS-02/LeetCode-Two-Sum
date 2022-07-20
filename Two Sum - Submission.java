Two Sum - "https://leetcode.com/problems/two-sum/"
SUBMIISSION

class Solution 
{
    public int[] twoSum(int[] nums, int target) 
    {
        int[] a;
        a = new int[2];
        
        int n;
        n = nums.length;
        for (int i=0; i<n; i++)    
        {
            for (int j=i+1; j<n; j++)
            {
                 if (nums[i] + nums[j] ==  target)
                 {
                     //System.out.println("nums[" + i + "] + nums[" + j + "] ==  " + target);
                     
                     a[0] = i;
                     a[1] = j;
                 }
            }
        }
    return a;
    }
}
