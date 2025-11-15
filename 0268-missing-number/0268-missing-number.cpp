class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size()+1;
        int sum = n*(n-1)/2;

        int currsum= 0;
        for(int n:nums){
            currsum+=n;
        }

        return sum-currsum;

    }
};