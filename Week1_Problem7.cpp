class Solution {
  public:
    int findPosition(int N , int M , int K) {
       if(N==1)return 1;
        M = M%N;
        int ans=M+K-1;
        ans = ans>N ? ans-N: ans;
        return ans;
    }
};
