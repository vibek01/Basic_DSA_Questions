#include<stdio.h>
int max_of_four(int a, int b, int c, int d){
    int arr[4] = {a,b,c,d}, temp = arr[0];
    for(int i=0; i<4; i++){
        if(arr[i] > temp){
            temp = arr[i];
        }
    }
    return temp;
}
int main(){
    int s,t,u,v;
    // printf("Enter four integers : ");
    scanf("%d %d %d %d",&s,&t,&u,&v);
    int x = max_of_four(s,t,u,v);
    printf("%d ",x);
    return 0;
}