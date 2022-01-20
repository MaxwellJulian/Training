#include <stdio.h> 
int nFaktorial(int n);
int x, hasil;

int main(){ 
    printf("FUNGSI FAKTORIAL\n");
    printf("Masukkan angka : ");
    scanf("%d",&x); getchar();
    hasil = nFaktorial(x);
    printf("Hasil %d! adalah : %d", x , hasil);
    return 0;
} 

int nFaktorial(int n){ 
    if (n==1 || n==0){ 
        return 1;
        } 
    else if (n>1) { return n * nFaktorial(n-1);
    } 
}