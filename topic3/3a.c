#include<stdio.h>
#include<stdlib.h>
int top;
int stack[1000];
//関数宣言
void initialize();
int pop();
void push(int);
int isEmpty();
int isFull();

int main(){
    int n;
    int a, b;
    char s[1000];

    initialize();
    while(1){
        //スペースまでの文字列を受け取る
        scanf("%[^ ]", s);
        n = s[0];
        //￥ｎならbreak;
        if(n=='\n' || s[1]=='\0') break;
        //演算子ならpopして計算してpush
        else if(n=='+'){
            a = pop();
            b = pop();
            push(a+b);
        }
        else if(n=='-'){
            b = pop();
            a = pop();
            push(a-b);
        }
        else if(n=='*'){
            a = pop();
            b = pop();
            push(a*b);
        }
        //オペラントならpush
        else if(n = atoi(s) ==0 && s[0] != '0'){
            push(n);
        }
    }
    printf("%d\n", pop());
    return 0;
}


void initialize(){
    top = 0;
}
//取り出し
int pop(){
    if(isEmpty()==1) printf("Empty!!\n");
    else{
        top--;
        return stack[top];
    }
}
//挿入
void push(int x){
    if(isFull()==1) printf("Full!!\n");
    else{
        stack[top]=x;
        top++;
    }
}

int isEmpty(){
    int flag=0;
    if(top==0) flag=1;
    return flag;
}

int isFull(){
    int flag=0;
    if(top==999) flag=1;
    return flag;
}