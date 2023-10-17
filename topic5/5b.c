#include<stdio.h>
#include<stdlib.h>

#define N_MAX 500000
#define INFTY (1 << 30)

int cnt=0;
void mergeSort(int *, int, int);
void merge(int *, int, int, int);

int main(){
    int n;
    int s[N_MAX];
    int i;

    //input
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &s[i]);
    
    //marge sort
    mergeSort(s, 0, n);

    //output
    for(i=0;i<n-1;i++)
        printf("%d ", s[i]);
    printf("%d\n", s[n-1]);
    printf("%d\n", cnt);
    return 0;
}

//mergeSort
void mergeSort(int *a, int left, int right){
    //continue until the number of array become less than 1
    if(left+1 < right){
        int mid = (left + right)/2;//set mid
        mergeSort(a, left, mid);//do mergeSort left side array
        mergeSort(a, mid, right);//do mergeSort right side array
        merge(a, left, mid, right);//merge
    }
}
//merge
void merge(int *a, int left, int mid, int right){
    int n1 = mid - left; //the number of left side array
    int n2 = right - mid;//the number of right side array
    int l[n1+1], r[n2+1];//array to copy devided array
    int i, j, k;//counter

    //devide to 2arrays
    for(i=0;i<n1;i++)
        l[i] = a[left+i];
    for(i=0;i<n2;i++)
        r[i] = a[mid+i];

    l[n1] = INFTY;
    r[n2] = INFTY;
    i = 0;
    j = 0;

    for(k=left;k<right;k++){
        cnt++;
        if(l[i]<=r[j]){
            a[k] = l[i];
            i++;
        }
        else{
            a[k] = r[j];
            j++;
        }
    }
}