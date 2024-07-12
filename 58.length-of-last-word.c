/*
 * @lc app=leetcode id=58 lang=c
 *
 * [58] Length of Last Word
 */

// @lc code=start
int lengthOfLastWord(char* s) {
    int count = 0;
    int his_count = 0;

    while (*s) {
        if (*s != ' ') {
            count++;
        } 
        else if (count > 0) {
            his_count = count;
            count = 0;
        }
        s++;
    }

    return (count > 0) ? count : his_count;
}
// @lc code=end

/*
while (*s) 用法
https://stackoverflow.com/questions/7778087/while-s-how-does-this-work
*/
