#include<stdio.h>
#include<stdlib.h>

#define NMAX 10000
#define QMAX 500
int main(){
    int n, q;//数列S,Tの要素数
    int c=0;
    int i, j;
    int array_s[NMAX], array_t[QMAX];
    //入力
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &array_s[i]);
    }
    scanf("%d", &q);
    for(i=0;i<q;i++){
        scanf("%d", &array_t[i]);
    }
    
    //カウント
    for(i=0;i<q;i++){
        array_s[n+1] = n;
        for(j=0;array_s[j]!=n;j++){
            if(array_t[i]==array_s[j]) c++;
        }
    }
    //出力
    printf("%d\n", c);
    return 0;
}