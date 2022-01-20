#include <stdio.h>

int i,n,t;

main(){
    printf("Masukkan banyak suku : ");
    scanf("%i",&n);
    t=n*2;
    output(n);
    return 0;
}

void output(){
    printf("hasil : ");
    for (i = 2; i <= t; i = i + 2) {
    printf("%i ",i);
    }
    printf("\n");
}