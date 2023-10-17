//挿入ソート
#include<stdio.h>

//出力関数
void trace(int A[], int N){
    for( int i = 0; i < N; i++ ){
        if( i > 0 ) printf(" "); //隣接する要素の間に一つの空白
        printf("%d", A[i]);
    }
    printf("\n");
}

//挿入ソート
void insertionSort(int A[], int N){
    for( int i = 1; i < N; i++ ){
        int v = A[i];
        int j = i - 1;
        while( j >= 0 && A[j] > v){
            A[j + i] = A[j];
            j--;
        }
        A[j + 1] = v;
        trace(A, N);
    }
}
int main(){
    int N;
    int A[100];

    scanf("%d", &N);
    for( int i = 0; i < N; i++ ) scanf("%d", &A[i]);

    trace(A, N); //並べる前の配列
    insertionSort(A, N);
    return 0;
}