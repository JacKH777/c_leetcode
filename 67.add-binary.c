/*
 * @lc app=leetcode id=67 lang=c
 *
 * [67] Add Binary
 */

// @lc code=start
char* addBinary(char* a, char* b) {
    int a_len = strlen(a);
    int b_len = strlen(b);
    int result_len = (a_len > b_len) ? a_len : b_len;
    result_len += 2;
    char *result = malloc(result_len * sizeof(char));
    int carry = 0;

    a_len --;
    b_len --;

    //最後加上'\0'
    result[result_len - 1] = '\0';

    //移到最後一個值
    result_len -= 2;

    //當len大於0，從最後一位開始相加，tmp>1則增加count
    while(result_len > 0){
        int sum = carry;
        if (a_len >= 0) {
            sum += a[a_len] - '0';
        }
        if (b_len >= 0) {
            sum += b[b_len] - '0';
        }

        result[result_len] = (sum % 2) ? '1' : '0';
        carry = sum / 2;
        a_len --;
        b_len --;
        result_len --;
    }

    if(carry){
        result[0] = '1';
        return result;
    }
    else return result + 1;
}
// @lc code=end

