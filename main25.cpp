
#include <stdio.h>

void printRow(int i, int j){
    if(j>9){
        return;
    }
    printf("%d*%d=%2d ", i, j, i*j);
    printRow(i, j+1);
}

void multi(int i){
    if(i>9) return;
    printRow(i, 1);
    printf(" \n");
    multi(i +1);
}

int main()
{
    multi(1);
    return 0;

}