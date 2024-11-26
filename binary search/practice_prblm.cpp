//problem link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    int fast_occur(vector<int>&nums,int target){
        int fast = -1;
        int l = 0, r = nums.size()-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(nums[mid] == target){
                fast = mid;
                r = mid-1;
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        return fast;
    }
    int last_occur(vector<int>&nums,int target){
        int last = -1;
        int l = 0, r =nums.size()-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(nums[mid] == target){
                last = mid;
                l = mid+1;
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fast = fast_occur(nums,target);
        if(fast == -1){
            vector<int>v = {-1,-1};
            return v;
        }
        int last = last_occur(nums,target);
        vector<int>v = {fast,last};
        return v;
    }
};