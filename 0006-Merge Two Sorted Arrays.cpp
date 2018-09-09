class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int a = 0;
        int b = 0;
        vector<int> res;
        while(a!=A.size() && b!=B.size()){
            if(A[a]>B[b]){
                res.push_back(B[b]);
                b++;
            }else{
                res.push_back(A[a]);
                a++;
            }
        }
        if(a==A.size()){
            while(b!=B.size()){
                res.push_back(B[b]);
                b++;
            }
        }
        if(b==B.size()){
            while(a!=A.size()){
                res.push_back(A[a]);
                a++;
            }
        }
        return res;
    }
};
