class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        int k=0;
        int arr[len];
        if(len==0 || len==1){
            return len;
        }
        for(int i=0;i<len-1;i++){ 
            if(nums[i]!=nums[i+1]){
                arr[k]=nums[i];
                k++;
            }
        }
        arr[k++]=nums[len-1];
        for(int i=0;i<k;i++){
            nums[i]=arr[i];
        }
        return k;
    }
};