/*
 * @lc app=leetcode id=322 lang=c
 *
 * [322] Coin Change
 */

// @lc code=start

int coinChange(int* coins, int coinsSize, int amount) {
    if(!amount) return 0;

    // 設定一個 arr 來紀錄過程
    int *dp = malloc((amount + 1) * sizeof(int));
    // 初始化成最大值
    for(int i = 0; i < amount + 1; i++){
        dp[i] = amount + 1;
    }

    dp[0] = 0; // 0元不需要coin

    // 遍歷1到amount每一個金額
    // 對於每一種coins，如果coins <= i，表示當前硬幣可以用於構成 i，然後更新dp[i]
    for(int i = 0; i < amount + 1; i++){
        for(int j = 0; j < coinsSize; j++){
            if(coins[j] <= i) dp[i] = dp[i] > (dp[i - coins[j]] + 1) ? dp[i - coins[j]] + 1 : dp[i];
        }
    }
    int result = dp[amount];
    free(dp);
    if(result == amount + 1) return -1;
    else return result; 
}
// @lc code=end

