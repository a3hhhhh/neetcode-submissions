class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_1=0,xor_2=0;
        for(int i =0; i <nums.size(); i++){
            xor_1 = xor_1^nums[i];

        }
        for (int j=1;j <nums.size()+1;j++){
            xor_2=xor_2^j;
        }
        return xor_1^xor_2;
    }
};