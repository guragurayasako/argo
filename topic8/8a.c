#include<stdio.h>
#define NIL 
typedef struct node{
    int key;
    struct node *parent, *left, *right;
} Node;

int main(){
    Node List[];
    int n;
    //input
    scanf("%d", &n);
    for( int i=0; i<n-1; i++ ){
        List[i].left = NULL;
        List[i].right = NULL;
        List[i].parent = NULL;
    }
    for( int i=0; i<n-1; i++ ){
        scanf("%d")
    }
    
    return 0;
}

void insert(){

}