class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        
        int low = 0,mid = 0;
        int high =arr.size();
        if(arr[high-1] ==  0)return -1;
        if(arr[0]==1) return 0;
        int ans = -1;
        while (low <= high) { 
        mid = low + (high - low) / 2;
            if (arr[mid] == 1) {
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};