#include<cstdio>
#define MAX 10000
#define NTL -1

struct Node{ int parent, left, right; };

Node T[MAX];
int n, D[MAX], H[MAX];

void setDepth(int u, int d){
    if(u==NTL) return;
    D[u] = d;
    setDepth(T[u].left, d+1);
    setDepth(T[u].right, d+1);
}
int setHeight(int u){
    int h1=0, h2=0;
    if(T[u].left!=NTL)
        h1 = setHeight(T[u].left)+1;
    if(T[u].right != NTL)
        h2 = setHeight(T[u].right)+1;
    return H[u] = ( h1>h2 ? h1:h2 );
}
//節点uの兄弟を返す
int setSibling(int u){
    if(T[u].parent == NTL) return NTL;
    if(T[T[u].parent].left != u && T[T[u].parent].left != NTL)
        return T[T[u].parent].left;
    if(T[T[u].parent].right != u && T[T[u].parent].right != NTL)
        return T[T[u].parent].right;
    return NTL;
}

void print(int u){
    printf("node %d: ", u);
    printf("parent = %d, ", T[u].parent);
    printf("sibling = %d, ", setSibling(u));
    int deg = 0;
    if(T[u].left != NTL) deg++;
    if(T[u].right != NTL )deg++;
    printf("degree = %d, ", deg);
    printf("depth = %d, ", D[u]);
    printf("height = %d, ", H[u]);

    if(T[u].parent == NTL ){
        printf("root\n");
    } else if(T[u].left == NTL && T[u].right == NTL){
        printf("leaf\n");
    } else{
        printf("internal node\n");
    }
}

int main(){
    int v, l, r, root = 0;
    scanf("%d", &n);
    for( int i=0;i<n;i++) T[i].parent=NTL;

    fpr(int i=0;i<n;i++){
        scanf("%d %d %d", &v, &l, &r);
        T[u].left = l;
    }
}