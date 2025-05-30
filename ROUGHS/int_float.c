#include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
#include<windows.h>
// #include<conio.h>
void sum_diff(int a,int b){
    int c = max(a,b);
    int d = min(a,b);
    printf("%d %d",c+d,c-d);
}
void sum_difff(float c, float d){
    float e = max(c,d);
    float f = min(c,d);
    printf("%.1f %.1f",e+f,e-f);
}
int main(){
    int a,b;
    float c,d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    sum_diff(a,b);
    printf("\n");
    sum_difff(c,d);
    return 0;
}