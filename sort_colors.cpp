class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len=nums.size();
        int temp;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                   temp=nums[j];
                   nums[j]=nums[j+1];
                   nums[j+1]=temp;
                }
            }
        }
        for(int i=0;i<len;i++)
        {
            cout<<nums[i]<<" ";
        }
    }
};