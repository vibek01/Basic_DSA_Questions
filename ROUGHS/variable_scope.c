#include <stdio.h>
int globalVar = 10;

void myFunction() {
    int localVar = 20;
    printf("Inside myFunction:\n");
    printf("globalVar: %d\n", globalVar);
    printf("localVar: %d\n", localVar);
}
int main() {
    int localVarMain = 30;
    printf("Inside main:\n");
    printf("globalVar: %d\n", globalVar);
    printf("localVarMain: %d\n", localVarMain);

    printf("\nAccessing globalVar from main: %d\n", globalVar);
    myFunction();

    return 0;
}
