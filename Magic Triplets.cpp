class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int count=0;
	    for(int i=1;i<nums.size()-1;i++)
	    {
	        int less=0,more=0;
	        for(int j=i-1;j>=0;j--)
	        {
	            if(nums[j]<nums[i]) less++;
	        }
	        
	        for(int k=i+1;k<nums.size();k++)
	        {
	            if(nums[k]>nums[i]) more++;
	        }
	        count+=(less*more);
	    }
	    return count;
	}
};
