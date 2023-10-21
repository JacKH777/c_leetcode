/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

// @lc code=start
int romanToInt(char * s){

    // 創建一個稀疏陣列，只有羅馬數字有值，要 +1 是為了避免迴圈有問題 EX. XXX
    int map['X' + 1] = {
        ['I'] = 1,
        ['V'] = 5,
        ['X'] = 10,
        ['L'] = 50,
        ['C'] = 100,
        ['D'] = 500,
        ['M'] = 1000
    };
    int count = 0;

    /*
    IV = -1 + 5, CM = -100 + 1000 
    如果前面的比較小，就先減掉
    */ 
    for(int i = 0; i < strlen(s); i++){
        if(map[s[i]] < map[s[i + 1]]){
            count -= map[s[i]];
        }
        else{
            count += map[s[i]];
        }
    }
    return count;
}
// @lc code=end

