#include <stdio.h>

void swap(int *a, int *b);

int main(){

    int al = 5, bl = 6;

    swap(&al,&bl);

    printf("%d %d\n", al, bl);

}

void swap(int *a, int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp; 

}