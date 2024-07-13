# 參考網站  
## 刷題順序
https://www.teamblind.com/post/New-Year-Gift---Curated-List-of-Top-75-LeetCode-Questions-to-Save-Your-Time-OaM1orEU
## 相關心得
https://github.com/yuan-luo/LeetCode  
https://github.com/youngyangyang04/leetcode-master  



# 時間紀錄
20240713
- 第121題
```c
int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0;

    // 兩個迴圈找最大值
    for(int i = 0; i < pricesSize - 1; i++){
        for(int j = i + 1; j < pricesSize; j++){
            if(prices[j] - prices[i] > max_profit) max_profit = prices[j] - prices[i];
        }
    }

    return max_profit;
}
// 問題點 : 時間複雜度O(n^2)，n變大會炸開
// 優化後複雜度為O(n)
```

- 第217題
```c
//問題點 : 用雙迴圈也會有時間複雜度O(n^2) 的問題，n變大會炸開
//解法 : 先進行排序再比較
//使用標準庫裡面的 qsort，時間複雜度O(nlogn)
//可以對各種形式陣列進行比較，但是需要先自行定義compare
void qsort(void *base, size_t nitems, size_t size, int (*compare)(const void *, const void*))
// base: 指向待排序数组的第一个元素的指针。
// nitems: 数组中的元素数量。
// size: 数组中每个元素的大小（以字节为单位）。
// compare: 比较函数的指针，该函数用于比较两个元素。比较函数应当返回一个整数，表示比较结果：
// 小于零：表示第一个元素小于第二个元素。
// 等于零：表示两个元素相等。
// 大于零：表示第一个元素大于第二个元素。
// https://www.runoob.com/cprogramming/c-function-qsort.html
```

- 第191題
```c
// 重點 : 十進制轉二進制的方法 
```

- 第338題
```c
// 第191題的延伸
```


20240712  
- 第67題
```c
// 三元運算
variable = (condition) ? statement1 : statement2;

// 記憶體分配
char *result = malloc(result_len * sizeof(char));

// string 最後加上'\0'
result[result_len - 1] = '\0';

// 地址往後移一位
else return result + 1;
```


