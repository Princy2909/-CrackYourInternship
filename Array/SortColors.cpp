class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0, ones=0, two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else if(nums[i]==1) ones++;
            else two++;

        }
        int j=0;
       for(j=0;j<zero;j++) nums[j]=0;
       for(j=zero;j<ones+zero;j++) nums[j]=1;
       for(j=ones+zero;j<nums.size();j++) nums[j]=2;
    }
};