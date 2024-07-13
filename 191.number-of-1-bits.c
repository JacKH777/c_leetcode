/*
 * @lc app=leetcode id=191 lang=c
 *
 * [191] Number of 1 Bits
 */

// @lc code=start

int hammingWeight(int n) {
    int count_binary = 0;

    // 除以二，餘數是二進制的值，直到除盡
    while(n >= 2){
        if(n%2) count_binary++;
        n /= 2;
    }

    if(n) count_binary ++;

    return count_binary;
}
// @lc code=end

