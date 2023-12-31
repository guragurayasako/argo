#include<iostream>
using namespace std;

void sort(int A[], int N){
    for(int i = 1; i < N; i++ ){
        int v = A[i];
        int j = i - 1;
        while( j >= 0 && A[j] > v ){
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
    }
}

int main(){
    int N;
    cin >> N;
    int A[N];
    for( int i = 0; i < N; i++ ) cin >> A[i];
    sort(A, N);
    for( int i = 0; i < N; i++ ) cout << A[i] << " ";
    cout << endl;

    return 0;
}