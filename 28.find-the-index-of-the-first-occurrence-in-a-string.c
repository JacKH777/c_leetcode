/*
 * @lc app=leetcode id=28 lang=c
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
int strStr(char * haystack, char * needle){
    int j = 0;

    for(int i = 0; i < strlen(haystack); i++){
        if(haystack[i] == needle[j]){
            j++;
            if(j == strlen(needle)){
                return i-j+1;
            }
        }
        else{
            i = i-j;
            j = 0;
        }
    }

    return -1;
}
// @lc code=end

