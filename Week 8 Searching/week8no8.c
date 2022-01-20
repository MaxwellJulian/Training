#include <stdio.h> 

struct mahasiswa{

    char nama[50];
    int nim[10];
}mhs;


int i,n,cari,idx,low,high,mid;

main (){ 
    printf("Banyak mahasiswa : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        //fflush(stdin);
        getchar();
        printf("Nama\t: ");
        gets(mhs.nama);
        printf("NIM\t: ");
        scanf("%d",&mhs.nim[i]);
    } 

    printf("NIM mahasiswa yang dicari : ");
    scanf("%d",&cari);
 
    
    i=0;
    while ((i<=n-1) && (mhs.nim[i]!=cari))
    i=i+1;
    if (mhs.nim[i]==cari)


    printf("%s dengan NIM %d ada di urutan %d",mhs.nama,cari,i+1);

    else printf("Data tidak ditemukan");
}
