#include<iostream>
using namespace std;

void bubbleSort(int A[], int N){
    int temp;
    bool flag = 1;

    for( int i = 0; flag; i++ ){
        flag = 0;
        for( int j = N - 1; j >= i + 1; j-- ){
            if( A[j] < A[j - 1]){
                swap(A[j], A[j - 1]);
                flag = 1;
            }
        }
    }
}
int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for( int i = 0; i < N; i++ ) scanf("%d", &A[i]);
    bubbleSort(A, N);
    for( int i = 0; i < N - 1; i++ ) cout << A[i] << " ";
    cout << A[N - 1] << endl;
    return 0;
}