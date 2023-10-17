//bubble sort
#include<stdio.h>
#define N 100

int bubble_sort(int *, int);
int main()
{
    int array[N];
    int i;
    int cnt, n;
    
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &array[i]);
    
    cnt = bubble_sort(array, n);

    for(i=0;i<n-1;i++)
        printf("%d ",array[i]);
    printf("%d\n", array[n-1]);
    printf("%d\n", cnt);
    return 0;
}

int  bubble_sort(int *array, int n)
{
    int i, j;//カウンタ
    int temp;//空
    int cnt=0, flag=1;//カウント、フラグ    

    while(flag==1)
    {
        flag = 0;
        for(i=n-1;i>0;i--)
        {
            if(array[i]<array[i-1])
            {
                flag = 1;
                cnt++;
                temp = array[i];
                array[i] = array[i-1];
                array[i-1] = temp;
            }
        }
    }
    return cnt;
}