class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();
        int position=0;

        for(int num: nums){
            if(num!=0){
                nums[position++]=num;
            }
        }

        while(position<n){
            nums[position++]=0;
        }

        return;

    }
};