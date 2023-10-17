#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n; //要素数
    int temp;

    scanf("%d", &n);
    int *array = (int *)malloc( n*sizeof(int) ); //動的メモリ割り当て
    
    for( int i=0 ; i<n ; i++ ) //入力を配列に挿入
        scanf("%d", &array[i]);
    
    for( int i=1 ; i<n ; i++ ) //先頭から小さい順にしていく
    {
        for( int j=0 ; j<n-1 ; j++ )//この時点での順番を出力
            printf("%d", array[j]);
        printf("%d\n", array[n-1]);

        for( int j=0 ; j<i ; j++ ) //自分より手前の要素全部と比較
        {
            if(array[i] < array[j]) //自分のほうが小さかったら並べ替え
            {
                temp = array[i];
                for( int k=i-1 ; k>=j ; k-- )
                    array[k+1] = array[k];
                array[j] = temp;
            }
        }
        
    }
    for( int j=0; j<n-1; j++ )
        printf("%d ", array[j]);
    printf("%d\n", array[n-1]);
    
    free(array);
    return 0;
}