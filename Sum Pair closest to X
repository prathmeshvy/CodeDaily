class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int s=0,e=arr.size()-1;
        vector<int> ans;
        int diff=INT_MAX;
        int si,li;
    
       
        while(s<e)
        {
            if(abs((arr[s]+arr[e]-x))<diff)
            {
               si=s,li=e;
               diff=abs(arr[s]+arr[e]-x);
            }
            if(arr[s]+arr[e]>x)
            {
                e--;
            }
            else
                s++;
               
        }
               return {arr[si],arr[li]}; 
    }
};
