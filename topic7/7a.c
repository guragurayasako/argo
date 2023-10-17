#include<stdio.h>

typedef struct{
    int key;
    List *next[];
}List;
typedef List * Listpointer;

List list[14];
int cnt=0;

int main(){
    Listpointer head;

    list[0].next[0] = head;
    scanf("%d", &head->key);
    input(head);
    return 0;
}

void input(int *adress){
    int i;

    scanf("%d", &soe);
    for(i=0;i<soe;i++){
        if(soe==0) break;
        scanf("%d", adress->next[i]->key);
        input(adress->next[i]);
    }
    adress->next[0] = NULL;
}