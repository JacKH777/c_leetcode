/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
char * longestCommonPrefix(char ** strs, int strsSize){
    int count = 200;
    /*
    char ans[201] = "";
    不可以這樣使用，因為在返回函式之後，地址會被銷毀
    因此改用動態分配
    */

    for(int i = 0; i < strsSize - 1; i++){
        int check = 0;

        for(int j = 0; j < strlen(strs[i]); j++){
            if(strs[i][j] == strs[i+1][j]){
                check++;
            }
            else break;
        }

        if(check < count){
            count = check;
        }
    }

    char *ans = (char *)malloc(count + 1);
    strncpy(ans, strs[0], count);
    ans[count] = '\0';

    return ans;
}
// @lc code=end

