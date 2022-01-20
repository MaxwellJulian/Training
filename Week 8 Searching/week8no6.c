#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char a[100], cari;
int i,n;

main (){
    printf("Masukan Kalimat : ");
    gets(a);
    n = strlen(a);

    printf("Huruf yang dicari : ");
    scanf("%c",&cari);

    //proses sequential search

    i=0;
    while ((i<=n-1) && (a[i]!=cari))
    i=i+1;
    if (a[i]==cari)
    printf("Karakter %c ada di urutan : %d",cari,i+1);
    else printf("Karakter tidak ditemukan");
}