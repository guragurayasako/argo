//selection sort
#include<stdio.h>
#define N 100
int selection_sort(int *, int);
int main()
{
    int array[N];
    int n, cnt;
    int i,j;
    
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &array[i]);
    
    cnt = selection_sort(array, n); //並べ替え

    for(i=0;i<n-1;i++) //配列表示
        printf("%d ",array[i]);
    printf("%d\n", array[n-1]);
    printf("%d\n", cnt);//カウント表示
    return 0;
}

int selection_sort(int *array, int n)//並べ替え
{
    int i;
    int temp;
    int st, cnt=0;
    int min, min_s, flag=1;

    for(st=0;st<n-1;st++)
    {
        min=array[st];
        min_s=st;
        for(i=st;i<n;i++)
        {
            if(array[i]<min)
            {
                min = array[i];
                min_s = i;
            } 
        }
        if(min_s!=st)
        {
            cnt++;
            temp = array[st];
            array[st] = array[min_s];
            array[min_s] = temp;
        }
    }


    return cnt;
}