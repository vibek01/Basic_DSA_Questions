#include<stdio.h>
void update(int *a, int *b){
    int c = *a+*b,e,max,min;
    if(*a > *b){
        max = *a;
        min = *b;
    }
    else{
        max = *b;
        min = *a;
    }
    e = max - min;
    printf("%d\n%d",c,e); 
}
int main(){
    int a,b;
    int *pa = &a, *pb = &b;
    scanf("%d %d",&a, &b);
    update(pa,pb);
    return 0;
}