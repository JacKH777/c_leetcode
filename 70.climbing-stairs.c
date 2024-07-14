/*
 * @lc app=leetcode id=70 lang=c
 *
 * [70] Climbing Stairs
 */

// @lc code=start
int climbStairs(int n) {
    // 費氏數列
    // n = 1 或 2 不需要malloc
   if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }

    int *fib_arr = malloc(n * sizeof(int));
    fib_arr[0] = 1;
    fib_arr[1] = 2;

    for(int i = 2; i < n; i++){
        fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
    }
    return fib_arr[n - 1];
}
// @lc code=end

