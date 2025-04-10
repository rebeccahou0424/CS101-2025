#include <stdio.h>

void printRow(int i, int j){
    if(i>9) return;
    if(j>9){
        printf("\n");
        printRow(i+1, 1);
        return;
    }
    printf("%d*%d=%2d ", i, j, i*j);
    printRow(i, j+1);
}

int main()
{
    printRow(1, 1);
    return 0;
}
