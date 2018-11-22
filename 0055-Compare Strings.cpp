class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &A, string &B) {
        // write your code here
        int alpha[26];
        memset(alpha,0,sizeof(int) * 26);
        int index;
        for(int i=0;i<A.size();i++){
            index = A[i] - 'A';
            alpha[index] ++;
        }
        for(int i=0;i<B.size();i++){
            index = B[i] - 'A';
            alpha[index] --;
            if(alpha[index] < 0) return false;
        }
        return true;
    }
};
