#include <bits/stdc++.h>
using namespace std;

// problem no : 704
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;

            if(arr[mid] == target) return mid;
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 4;
    cout << sol.search(arr, target) << endl; 
    return 0;
}
