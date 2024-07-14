/*
 * @lc app=leetcode id=190 lang=c
 *
 * [190] Reverse Bits
 */

// @lc code=start
uint32_t reverseBits(uint32_t n) {
    char char_reverse_bit[32];
    memset(char_reverse_bit, '0', 32);
    int count = 1;
    
    // 將資料儲存成 char array 並反轉
    while(n > 1){
        char_reverse_bit[32 - count] = (n % 2) + '0';
        count ++;
        n /= 2;
    }

    if(n) char_reverse_bit[32 - count] = '1';
    // for(int i = 0; i < 32; i++){
    //     printf("%c", char_reverse_bit[i]);
    // }

    // 不要使用 pow() 會比較慢(by chatgpt)
    uint32_t ans = 0;
    uint32_t two_pow = 1;
    for(int i = 0; i < 32; i++){
        if(char_reverse_bit[i] == '1'){
            ans += two_pow;
        }
        two_pow *= 2;
    }
    return ans;
}
// @lc code=end

