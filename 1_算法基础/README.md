[常用代码模板1——基础算法
](https://www.acwing.com/blog/content/277/)


## 前缀和
    q[i] = sum[i] - sum[i-1];
## 前缀矩阵
### 构造前缀矩阵
    s[i][j] += s[i-1][j]+s[i][j-1]-s[i-1][j-1];
### 求子矩阵的和
    area(x1y1,x2y2) = S[x2, y2] - S[x1 - 1, y2] - S[x2, y1 - 1] + S[x1 - 1, y1 - 1]

## 差分
### 核心公式
$a_i=\sum_i^nb_i$

## 位运算
### 求n的第k位数字: 
    n >> k & 1
### 返回n的最后一位1：
    lowbit(n) = n & -n