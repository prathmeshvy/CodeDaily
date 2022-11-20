class Solution {
  public:
    long long lcmTriplets(long long N) {
        // code here
        if(N<=2) return N;
        if(N%2) return N*(N-1)*(N-2);
        if(N%3) return N*(N-1)*(N-3);
        else
            return (N-1)*(N-2)*(N-3);
        
    }
};
