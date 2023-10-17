#include<stdio.h>
#define MAX 250
int main(){
    int H,A[MAX+1];

    //input
    scanf("%d", &H);
   
    for(int i=1; i<=H; i++){
       scanf("%d", &A[i]);
    }
    //output
    for(int i=1; i<=H; i++){
        printf("node %d: key = %d, ", i, A[i]);
        if(i/2 >= 1)printf("parent key = %d, ", A[i/2]);
        if(2*i <= H)printf("left key = %d, ", A[2*i]);
        if(2*i+1 <= H)printf("right key = %d, ", A[2*i+1]);
        printf("\n");
    }
    return 0;
}