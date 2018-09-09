// 18-09-09
// Bit manipulation
// 按位加和 + 进位 = 最后的结果
// 按位和 -> a, 进位 -> b，递归调用此函数直到 b == 0; 

class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        // write your code here
        if(b==0) return a;
        return aplusb(a^b,(a&b)<<1);
    }
};
