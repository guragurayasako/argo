#include<stdio.h>
#include<stdlib.h>
#define MAX 200001
#define VMAX 10000
int main(){
    unsigned short *A,*B;

    int C[VMAX+1];//counting array
    int n, i, j;
    
    //input
    scanf("%d", &n);

    A = malloc(sizeof(short)*n + 1);
    B = malloc(sizeof(short)*n + 1);
    //set all elements of array 0
    for(i=0;i<=VMAX;i++) C[i]=0;
    //input of arrayA and count
    for(i=0;i<n;i++){
        scanf("%hu", &A[i+1]);
        C[A[i+1]]++;
    }
    //calculate total numer of each elements of arrayC
    for(i=1;i<=VMAX;i++) C[i] = C[i] + C[i-1];
    //input sorted array into arrayB
    for(j=1;j<=n;j++){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    //output
    for(i=1;i<=n;i++){
        if(i>1)printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");

    return 0;
}