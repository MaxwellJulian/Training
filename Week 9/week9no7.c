#include<stdio.h>

struct mhs{ 
    char nama[20],nim[20]; 
    int nilai; 
};

struct mhs a[100]; 
int i,n;

main(){ 
    printf("Banyak Mahasiswa : ");
    scanf("%d",&n);
    printf("\n");
    input(n);
    output(n);
    return 0;
}

void input(){
    for (i=0; i<=n-1; i++){ 
        printf("%d.\tNama : ",i+1); 
        fflush(stdin);
        gets(a[i].nama);
        printf(" NIM : ");
        gets(a[i].nim);
        printf(" Nilai : ");
        scanf("%d",&a[i].nilai);
        printf("\n");
    } 
    printf("\n");
}

void output(){
    for (i=0; i<=n-1;i++){
        printf("%d. Nama :%s \n",i+1,a[i].nama);
        printf(" NIM : %s \n",a[i].nim);
        printf(" Nilai : %i\n",a[i].nilai);
        printf("\n");
    } 
}