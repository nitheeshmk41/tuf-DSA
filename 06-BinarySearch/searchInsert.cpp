#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = nums.size();
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] < target){
                low = mid + 1;
            }else{
                ans = mid;
                high = mid -1;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,3,5,6};
    int tar = 7;
    cout << "Ans -> " << sol.searchInsert(nums, tar) << endl;;
}