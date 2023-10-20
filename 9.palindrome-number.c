/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
bool isPalindrome(int x){

    long long reverse = 0; // int 大小不夠
    long long temp = x;

    // 負號一定不行
    if(x < 0) return false;

    // 使用餘數重新建立數字
    while(temp > 0){
        int remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }

    return (reverse == x);
}
// @lc code=end

