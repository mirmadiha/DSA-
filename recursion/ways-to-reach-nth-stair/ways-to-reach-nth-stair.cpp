class Solution {
  public:
    // Function to count number of ways to reach the nth stair.
    int countWays(int n) {
        // your code here
        if(n<0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        
        long long int ans=countWays(n-1)+countWays(n-2);
        
        return ans;
    }
};
