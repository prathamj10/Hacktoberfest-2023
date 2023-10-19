/*Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.
A subarray is a contiguous part of the array.
*/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size(), i = 0, count_1 = 0, ans = 0;
        unordered_map<int,int> mp;
        while(i < n){
            count_1 += nums[i];
            if(count_1 == goal)
                ans++;
            if(mp.find(count_1 - goal) != mp.end())
                ans += mp[count_1 - goal];
            mp[count_1]++;
            i++;
        }
        return ans;
        
    }
};
