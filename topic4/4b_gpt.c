#include <stdio.h>

// 二分探索を行う関数
int binary_search(int array[], int size, int target) {
    // 探索範囲の左端点を0、右端点をsize-1に設定
    int left = 0;
    int right = size - 1;
    int middle;
    // 探索範囲が存在する限り繰り返す
    while (left <= right) {
        // 探索範囲の中央を計算
        middle = (left + right) / 2;

        // 中央の値がtargetより小さい場合、探索範囲を右半分に絞り込む
        if (array[middle] < target) {
            left = middle + 1;
        }
        // 中央の値がtargetより大きい場合、探索範囲を左半分に絞り込む
        else if (array[middle] > target) {
            right = middle - 1;
        }
        // 中央の値がtargetと一致する場合、その位置を返す
        else {
            return middle;
        }
    }

    // 探索範囲がなくなり、targetが見つからなかった場合、-1を返す
    return -1;
}


int main(void) {
    
    int n, q;
    int s[n], t[q];
    int c = 0;// Cをカウントする変数を定義
    int i;
    int pos;// 二分探索を行い、結果を変数posに代入
    // nを読み込む
    scanf("%d", &n);

    // Sを読み込む
    for (i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    // qを読み込む
    scanf("%d", &q);

    // Tを読み込む
    
    for (i = 0; i < q; i++) {
        scanf("%d", &t[i]);
    }

    // Tの要素を1つずつ取り出し、Sに存在するか検索する
    for (i = 0; i < q; i++) {
        pos = binary_search(s, n, t[i]);
        // posが0以上の場合、Sにt[i]が存在するため、Cをインクリメント
        if (pos >= 0) {
            c++;
        }
    }

    // Cを出力
    printf("%d\n", c);

    return 0;
}
