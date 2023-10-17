#include <stdio.h>

#define MAX_N 20
#define MAX_Q 200

int n;
int a[MAX_N];

int q;
int m[MAX_Q];

int dfs(int i, int sum) {
    // 再帰の終了条件
    if (i == n) {
        return sum == 0;
    }
    // A の i 番目の要素を使用しない場合
    if (dfs(i + 1, sum)) {
        return 1;
    }
    // A の i 番目の要素を使用する場合
    if (dfs(i + 1, sum - a[i])) {
        return 1;
    }
    return 0;
}

int main() {
    //入力 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
    scanf("%d", &m[i]);
    }
    //出力
    for (int i = 0; i < q; i++) {
        if (dfs(0, m[i])) {
        printf("yes\n");
        } 
        else {
            printf("no\n");
        }
    }
  return 0;
}

