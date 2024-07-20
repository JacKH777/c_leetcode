/*
 * @lc app=leetcode id=139 lang=c
 *
 * [139] Word Break
 */

// @lc code=start
bool isInDict(char* substr, char** wordDict, int wordDictSize){
    for(int i = 0; i < wordDictSize; i++){
        if(!strcmp(substr, wordDict[i])) return true;
    }
    return false;
}

bool wordBreak(char* s, char** wordDict, int wordDictSize) {
    if(wordDictSize == 1 && strcmp(s, wordDict[0])) return false;
    else if(wordDictSize == 1 && !strcmp(s, wordDict[0])) return true;

    // dp用來儲存當前這個字母前i個是否能被分割,
    // dp[0]代表空字串，所以要len(s)+1
    int len = strlen(s);
    bool *dp = malloc((len + 1) * sizeof(bool));

    // 初始化
    for(int i = 0; i < (len + 1); i++) dp[i] = false;
    dp[0] = true;

    // 先遍歷每一個字
    // 如果找得到字典j裡面有符合且前面
    for(int i = 1; i <= len; i ++){
        for(int j = 0; j < i; j++){
            if(dp[j]){
                char substr[i - j + 1];
                strncpy(substr, s + j, i - j);
                substr[i - j] = '\0';
                if(isInDict(substr, wordDict, wordDictSize)){
                    dp[i] = true;
                    break;
                }
            }
        }
    }
    bool result = dp[len];
    // for(int i = 0; i < strlen(s) + 1; i++) printf("%d", dp[i]);
    free(dp);
    return result;
}
// @lc code=end

