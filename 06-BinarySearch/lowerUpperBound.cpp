#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void find_lower_bound(vector<int> nums, int tar, int n){
    int low = 0; 
    int high = n -1;
    int ans = n - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        cout << "Mid:" << mid << endl;
        if(nums[mid] >= tar){
            ans = mid;
            cout << ans << endl;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    cout << "Lower bound is -> " << ans << endl;
}

int main(){
    vector<int> nums = {2,3,4,5,6,7};
    int tar = 3;
    int n = nums.size();

    find_lower_bound(nums, tar, n);
}