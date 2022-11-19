class Solution{
    public:
   int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int, int> um;
        
        int currSum = 0;
        int maxLength = 0;
        for(int i=0; i<n; i++) {
            currSum += A[i];
            
            if(currSum == 0)
                maxLength = i+1;
            
            if(um[currSum])
                maxLength = max(maxLength, i - um[currSum] + 1);
            else um[currSum] = i+1;
        }
        
        return maxLength;
    }
};
