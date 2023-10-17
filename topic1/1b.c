#include <stdio.h>

int gcb(int, int);

int main() 
{
    int m, n;

    scanf("%d%d", &m,&n);//入力
    if(n<=m) printf("%d\n", gcb(m, n));//出力
    else printf("%d", gcb(n, m));
    return 0;
}

int gcb(int a, int b){
 if(b == 0)
 { 
    return a;
 }
 else
 { 
    return gcb( b, a%b ); //再帰
 }
}