#include<stdio.h>
#include<stdlib.h>

#define N 10000
int findprime(int);
int main()
{
    int n, i, j;//入力値の数とカウンタ
    int cnt = 0;
    int array[N];

    scanf("%d",&n);//データ個数入力

    for( i=0 ; i<n ; i++ ) //データ挿入
    {
        scanf("%d", &array[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        if(findprime(array[i]) == 1) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

int findprime(int a)
{
    int i;
    if( a == 2 ) return 1;
    for( i=2 ; i*i<= a; i++ ){
        if(a%i==0) return 0;//素数じゃないなら０を返す
    }
    return 1; //素数なら1を返す

}
