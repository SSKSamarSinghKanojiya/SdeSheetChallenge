class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max_Sum = 0;
        int Current_Sum = 0;
        int n = nums.size();
        if (n == 1) {
        return nums[0];
        }
        for(int i=0; i<nums.size(); i++){
            Current_Sum = Current_Sum + nums[i]; 
                if(Current_Sum > Max_Sum){
                    Max_Sum = Current_Sum;
                }
            if(Current_Sum < 0){
                Current_Sum = 0;
            }
        }
        return Max_Sum;
    }
};