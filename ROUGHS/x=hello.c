#include<stdio.h>
int push(int *top){
    *top = *top + 1;
    return top;
}
int main(){
    int *top = -1,x,y;
    x = push(&top);
    y= push(&top);
    printf("%d %d",x,y);
    return 0;
}