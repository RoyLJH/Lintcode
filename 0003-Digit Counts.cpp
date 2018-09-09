class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
        int res = 0;
        if(k==0) res = 1;
        int i,j;
        for(int j=1;j<=n;j++){
            i = j;
            while(i){
                if(i%10 == k) res++;
                i /= 10;
            }
        }
        return res;
    }
    
};
